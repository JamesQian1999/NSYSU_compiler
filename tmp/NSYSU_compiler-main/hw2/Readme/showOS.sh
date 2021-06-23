#!/bin/bash

cat /etc/os-release | sed -En 's/PRET.*"(.*)"/\1/p'
