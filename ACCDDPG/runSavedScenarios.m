% Initialize arrays
positions = zeros(10, 3);
velocities = [];

fileID = fopen('random_generated_scenarios.txt', 'r');

% Read the first line
line = fgets(fileID);

% Variable that selects the starting line/scenario
selectedLine = 8; 

% Calculate the starting line number
startLine = (selectedLine - 1) * 24 + 1;

% Counter for current line number
lineNumber = 1;

% Loop until the line with "END" is read or the starting line is reached
while true
    line = strtrim(line);  % Remove leading/trailing whitespaces
    
    if strcmp(line, 'WAITPOINTS') && lineNumber >= startLine
        for i = 1:10
            line = fgets(fileID);
            parts = strsplit(line, ',');
            waitpointX = str2double(parts{1});
            waitpointY = str2double(parts{2});
            waitpointZ = str2double(parts{3});
            positions(i, :) = [waitpointX waitpointY waitpointZ];
        end
    end
    
    if strcmp(line, 'VELOCITIES') && lineNumber >= startLine
        for i = 1:10
            line = fgets(fileID);
            parts = strsplit(line, '\n');
            vel = str2double(parts{1});
            velocities(i,1) = vel;
        end
        
        % Save positions and velocities to a file
  
        save('scenario_run_data.mat', 'positions', 'velocities');
        break;
    end
    
    line = fgets(fileID);
    lineNumber = lineNumber + 1;
end

% Close the file
fclose(fileID);

% Display the arrays
disp(positions);
disp(velocities);