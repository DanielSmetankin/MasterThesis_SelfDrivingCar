# MasterThesis_SelfDrivingCar
This repo contains my simulink , matlab and c++ deployement code to create a f1tenth self driving car

# ACCDDPG 
Contains all simulation code and everything you need to train an RL agent in matlab and to preform environmental robustness testing.
You can paste the whole ACCDDPG folder into your Matlab directory.
Matlab version used is R2022b
For more details about simulation you can refer to the simulation manual

# Deployement
Contained within this folder is all the necessary components for deployment, encompassing the complete catkin workspace (catkin_ws). 
The code responsible for the logic of the self driving car can be found in /deployment/catkin_ws/src/RL_policy_package/src/ for agent A, 
and in /deployment/catkin_ws/src/RL_policy_package_safe/src/ for agent S. To facilitate the setup of the deployment, you can refer to the deployment manual.




