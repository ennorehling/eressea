#include <platform.h>
#include "xmlconf.h"

#include <kernel/race.h>
#include <CuTest.h>
#include <tests.h>

#include <string.h>

static void test_xmlconf(CuTest *tc) {
    const char *xml = "<eressea>"
    "<races><race name=\"human\" weight=\"1000\"><attack type=\"1\" damage=\"1d5\"/></race></races>"
    "</eressea>";
    const race *rc;
    test_setup();
    CuAssertIntEquals(tc, 0, xmlconf_parse(xml, strlen(xml)));
    CuAssertPtrNotNull(tc, rc = rc_find("human"));
    CuAssertIntEquals(tc, 1000, rc->weight);
    CuAssertIntEquals(tc, AT_NONE, rc->attack[1].type);
    CuAssertIntEquals(tc, AT_STANDARD, rc->attack[0].type);
    CuAssertIntEquals(tc, 0, rc->attack[0].flags);
    CuAssertIntEquals(tc, 0, rc->attack[0].level);
    CuAssertStrEquals(tc, "1d5", rc->attack[0].data.dice);
    test_cleanup();
}

CuSuite *get_xmlconf_suite(void)
{
    CuSuite *suite = CuSuiteNew();
    SUITE_ADD_TEST(suite, test_xmlconf);
    return suite;
}
