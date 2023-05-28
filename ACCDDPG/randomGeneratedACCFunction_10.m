function [scenario, egoVehicle] = complicatedACC4()
% createDrivingScenario Returns the drivingScenario defined in the Designer
read = true;
% Generated by MATLAB(R) 9.13 (R2022b) and Automated Driving Toolbox 3.6 (R2022b).
% Generated on: 09-May-2023 21:52:42

%%
randomSceariosCreator
load('mydata.mat', 'positions', 'velocities');
%%

% Construct a drivingScenario object.
scenario = drivingScenario('SampleTime', 0.1);
% Add all road segments
roadCenters = [0.3 0.2 0;
    302.2 -0.9 0];
road(scenario, roadCenters, 'Name', 'Road');

% Add the ego vehicle
egoVehicle = vehicle(scenario, ...
    'ClassID', 1, ...
    'Position', [6.7 0.5 0], ...
    'Mesh', driving.scenario.carMesh, ...
    'Name', 'Car');

% Add the non-ego actors
car1 = vehicle(scenario, ...
    'ClassID', 1, ...
    'Position', [18.8 0.2 0], ...
    'Mesh', driving.scenario.carMesh, ...
    'Name', 'Car1');


waypoints = positions
speed = velocities
fileID = fopen('random_generated_scenarios.txt', 'a');
fprintf(fileID, 'WAITPOINTS \n');
dlmwrite('random_generated_scenarios.txt', waypoints ,'-append');
fprintf(fileID, 'VELOCITIES \n');
dlmwrite('random_generated_scenarios.txt', speed,'-append');
fprintf(fileID, '\n \n');
fclose(fileID);
trajectory(car1, waypoints, speed);

