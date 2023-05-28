
generate_scenario = true;
test_scenario = false;
amount_scenarios = 20;
if generate_scenario == true
   for i= 1:amount_scenarios
    [scenario,egoVehicle] =randomGeneratedACCFunction_10 ;
      sim("ACCTestBenchPolicy.slx", 60)
   end
end

if test_scenario == true
     [scenario,egoVehicle] =runSavedScenarioFunction ;
      sim("ACCTestBenchPolicy.slx", 60)
end
  

