
//          Copyright Nathaniel Christen 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)


#ifndef TEST_RESULT_EVENT_NEXUS__H
#define TEST_RESULT_EVENT_NEXUS__H


#include <QString>

#include "QCohortEventNexus.h"

#include "QCohortBasicEvent.h"
#include "Test_Result.h"
#include "Student.h"

class QVariant_Event_Nexus;


class Test_Result_Event_Nexus : public QCohortEventNexus<QCohortBasicEvent, Student, Test_Result>
{

public:

 Test_Result_Event_Nexus(QString description);


 const Test_Result& test_result() const
 {
  return *observation_object_;
 }

 const Student& student() const
 {
  return *ground_object_;
 }

 QVariant_Event_Nexus* to_qvariant_nexus();


};


#endif
