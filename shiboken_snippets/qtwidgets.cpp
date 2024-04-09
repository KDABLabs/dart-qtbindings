// @snippet qapplication-2
static const char *s_argv[1] = { "foo" }; // TODO: This is just a hack for testing purposes
static int s_argc = 1; // TODO: This is just a hack for testing purposes

QApplication_wrapper::QApplication_wrapper()
    : ::QApplication(s_argc, (char**)s_argv) {
}
// @snippet qapplication-2
