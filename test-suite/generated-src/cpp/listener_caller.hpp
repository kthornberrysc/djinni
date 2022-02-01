// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from multiple_inheritance.djinni

#pragma once

#include <memory>

namespace testsuite {

class FirstListener;
class SecondListener;

/**
 * Tester for the ability to call two interfaces which might be
 * implemented on the same object.  That's not relevant in all
 * languages, due to the details of multiple inheritance and object
 * comparison.
 */
class ListenerCaller {
public:
    virtual ~ListenerCaller() = default;

    static std::shared_ptr<ListenerCaller> init(const std::shared_ptr<FirstListener> & first_l, const std::shared_ptr<SecondListener> & second_l);

    virtual void callFirst() = 0;

    virtual void callSecond() = 0;
};

}  // namespace testsuite
