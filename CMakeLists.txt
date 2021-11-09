cmake_minimum_required(VERSION 3.0.0)

project(stl_speechContestSystem VERSION 0.1.0)

aux_source_directory(. CPP_LIST)
add_executable(project ${CPP_LIST})

