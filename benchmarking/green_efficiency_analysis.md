# Green Efficiency Analysis

## Measurement Methodology

This experiment examined the execution times of two C programs
provided for the benchmarking assignment. The algorithm comparison
program measured a naive nested-loop implementation and a
single-pass implementation using clock(). The recorded results
were collected from 3 executions. The average execution
time was calculated using the arithmetic mean of the recorded
measurements.

The instrumentation program divided execution into three phases:
dataset construction, dataset processing, and checksum reduction.
Each phase was measured using clock_t and clock(), with elapsed
clock ticks converted to seconds using CLOCKS_PER_SEC. Three
additional executions were collected for this report. All
measurements used the supplied dataset sizes and original
algorithmic logic.

## Observed Performance Differences

The naive implementation recorded an average execution time
of 2.786706 seconds, while the single-pass implementation
recorded 0.000113 seconds. The relative runtime ratio was
24734.07 times. These observations describe the measured
executions rather than guaranteeing identical performance
under every environment or compiler configuration.

The naive implementation uses nested loops and performs
substantially more iterations than the single-pass version.
However, the two implementations do not calculate identical
results: the naive version repeatedly counts elements from
earlier positions. Consequently, the comparison demonstrates
a runtime difference but is not a fully equivalent-output
algorithm benchmark.

For the instrumentation experiment, the average total runtime
was 0.000738 seconds. Dataset construction
averaged 0.000274 seconds, processing averaged
0.000324 seconds, and checksum reduction averaged
0.000135 seconds. The largest average phase
measurement was PROCESS. This identifies the largest measured
phase under the conditions of these executions, not necessarily
a universal performance bottleneck.

## Relation Between Runtime and Energy Consumption

Runtime is relevant to energy efficiency because a program
that executes for longer may keep computing resources active
for a longer period. Energy consumption depends on both
power usage and elapsed time. Therefore, shorter execution
can potentially reduce energy consumption when power demand
is otherwise comparable.

In this experiment, the measured runtimes provide evidence
about execution duration, not direct electrical energy use.
No wattmeter, processor power counter, or energy profiling
tool was used. It would therefore be incorrect to claim a
specific energy saving percentage from these results.
The runtime comparison instead provides a starting point
for investigating possible energy improvements.

## Limitations of the Experiment

Several limitations affect interpretation. First, clock()
measures processor time rather than direct energy consumption.
Second, short execution intervals can be affected by timer
resolution and measurement overhead. Third, operating system
activity, compiler settings, and processor conditions may
influence observed execution times. The measurements also
represent a limited number of runs rather than a comprehensive
statistical evaluation.

The algorithm comparison has an additional limitation because
the two implementations produce different numerical results.
The instrumentation program also uses a fixed dataset and
fixed processing sequence. Its findings should not be
generalized to different workloads without additional tests.

## Practical Engineering Takeaway

The recorded results demonstrate the value of measuring
software performance before making optimization decisions.
The algorithm comparison highlights the runtime implications
of repeated nested-loop work, while phase instrumentation
helps locate where a particular program spends its measured
execution time.

A practical engineering approach is to preserve correctness,
measure individual phases, identify expensive operations,
and verify improvements using repeated tests. Energy-related
claims should be supported by direct power or energy
measurements rather than execution time alone. Together,
these principles encourage evidence-based optimization and
more responsible use of computing resources.
