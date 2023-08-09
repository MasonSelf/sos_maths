/*
  ==============================================================================

    FloatComparisons.h
    Created: 8 August 2023 2:09:55pm
    Author:  Mason Self

  ==============================================================================
*/

#pragma once
#include <juce_core/juce_core.h>

template <T>
static bool IsLessThanOrEqual(T lhs, T rhs)
{
    if (juce::approximatelyEqual(lhs, rhs))
    {
        return true;
    }
    return lhs < rhs;
}

template <T>
static bool IsGreaterThanOrEqual(T lhs, T rhs)
{
    if (juce::approximatelyEqual(lhs, rhs))
    {
        return true;
    }
    return lhs > rhs;
}


