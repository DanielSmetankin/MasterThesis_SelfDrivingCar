 function [scenario, egoVehicle] = simpleACC()
% createDrivingScenario Returns the drivingScenario defined in the Designer

% Generated by MATLAB(R) 9.13 (R2022b) and Automated Driving Toolbox 3.6 (R2022b).
% Generated on: 29-Apr-2023 22:30:36

% Construct a drivingScenario object.
scenario = drivingScenario('SampleTime', 0.1);

% Add all road segments
roadCenters = [0.2 -0.1 0;
    201.5 -0.4 0];
road(scenario, roadCenters, 'Name', 'Road');

% Add the ego vehicle
egoVehicle = vehicle(scenario, ...
    'ClassID', 1, ...
    'Position', [7.1 0.1 0], ...
    'Mesh', driving.scenario.carMesh, ...
    'Name', 'Car');

% Add the non-ego actors
car1 = vehicle(scenario, ...
    'ClassID', 1, ...
    'Position', [15.3987111496794 -0.0921885481833274 0], ...
    'Mesh', driving.scenario.carMesh, ...
    'Name', 'Car1');
waypoints = [15.3987111496794 -0.0921885481833274 0;
    50.4 0.4 0;
    77.2 0 0;
    112.2 0 0;
    161.3 -0.4 0;
    198.3 -0.4 0];
speed = [4;5;7;5;2.5;1];
waittime = [0;0;0;0;0;0];
smoothTrajectory(car1, waypoints, speed, waittime);

