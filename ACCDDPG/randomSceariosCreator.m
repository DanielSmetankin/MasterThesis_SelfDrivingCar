% Define arrays of discrete wait points and velocities
num_actions = 10;
wait_points = 0:290;
num_wait_points = length(wait_points);
velocities = 0:0.1:20;

% Generate a grid of all possible actions
[wait_mesh, vel_mesh] = meshgrid(wait_points, velocities);
actions = [wait_mesh(:), vel_mesh(:)];

% Choose a random subset of actions

random_indices = randperm(size(actions, 1), num_actions);
random_actions = actions(random_indices, :);

% Extract positions and velocities from random actions
positions_x = sort(random_actions(:, 1));
positions_y = rand(num_actions, 1) * 0.6 - 0.3;  % y values between -0.3 and 0.3
positions_z = zeros(num_actions, 1);  % z values always 0
velocities = random_actions(:, 2);

% Combine x, y, and z values into a single array
positions = [positions_x, positions_y, positions_z];

% Save positions and velocities to a file
save('mydata.mat', 'positions', 'velocities');