function [scenario, egoVehicle] = complicatedACC3()

% createDrivingScenario Returns the drivingScenario defined in the Designer

% Generated by MATLAB(R) 9.13 (R2022b) and Automated Driving Toolbox 3.6 (R2022b)
% Generated on: 06-May-2023 12:34:28
randomSceariosCreator
load('mydata.mat', 'positions', 'velocities');
% Construct a drivingScenario object.
scenario = drivingScenario('SampleTime', 0.1);

% Add all road segments
roadCenters = [-0.3 -0.1 0;
    251.5 -0.2 0];
road(scenario, roadCenters, 'Name', 'Road');

% Add the ego vehicle
egoVehicle = vehicle(scenario, ...
    'ClassID', 1, ...
    'Position', [1.4 0.1 0], ...
    'Mesh', driving.scenario.carMesh, ...
    'Name', 'Car');

% Add the non-ego actors
car1 = vehicle(scenario, ...
    'ClassID', 1, ...
    'Position', [23.5 -0.1 0], ...
    'Mesh', driving.scenario.carMesh, ...
    'Name', 'Car1');
waypoints = positions
speed = velocities
waittime = [0;0;0;0;0;0;0];
trajectory(car1, waypoints, speed, waittime);

