#!/bin/bash
find . -name "*.sh" -exec basename -s ".sh" {} \;
