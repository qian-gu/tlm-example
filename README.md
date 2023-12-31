# TLM Example

## Diagram

```text

|---------|     |-------------------|
|         |     |  GPU              |
|         |     |                   |
|         |     |   |------------|  |
|   CPU   |     |   |            |  |
|         | <-> |<->| GPUManager |  |
|         |     |   |            |  |
|         |     |   |------------|  |
|         |     |                   |
|---------|     |-------------------|

```

## Dependencies

+ [Virtual Components Modeling Library](https://github.com/machineware-gmbh/vcml)

## Build

```sh
# Setup environable variables
export SYSTEMC_HOME=/usr/local/systemc-2.3.3
export VCML_HOME=/usr/local/vcml
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$SYSTEMC_HOME/lib-linux64:$VCML_HOME/lib
# budild and run
make
./Build/out
```
