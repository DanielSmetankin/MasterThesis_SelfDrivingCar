function [scenario, egoVehicle] = testScenario1()
% createDrivingScenario Returns the drivingScenario defined in the Designer

% Generated by MATLAB(R) 9.13 (R2022b) and Automated Driving Toolbox 3.6 (R2022b).
% Generated on: 23-May-2023 15:51:16

% Construct a drivingScenario object.
scenario = drivingScenario('SampleTime', 0.1);

% Add all road segments
roadCenters = [-1.6 0.6 0;
    309 0.3 0];
road(scenario, roadCenters, 'Name', 'Road');

% Add the ego vehicle
egoVehicle = vehicle(scenario, ...
    'ClassID', 1, ...
    'Position', [8 0.4 0], ...
    'Mesh', driving.scenario.carMesh, ...
    'Name', 'Car');

% Add the non-ego actors
car1 = vehicle(scenario, ...
    'ClassID', 1, ...
    'Position', [18.5 0.9 0], ...
    'Mesh', driving.scenario.carMesh, ...
    'Name', 'Car1');
waypoints = [18.5 0.9 0;
    136.9 0.4 0;
    210.3 0.4 0;
    220.3 0.4 0;
    303.1 0.4 0];
speed = [10;10;10;10;10];
waittime = [0;0;0;0;0];
trajectory(car1, waypoints, speed, waittime);

