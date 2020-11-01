#include <fmt/format.h>
#include <fmt/chrono.h>
#include <CLI11.hpp>

int main(int argc, char **argv)
{
  /**
   * CLI11 is a command line parser to add command line options
   * More info at https://github.com/CLIUtils/CLI11#usage
   */
  CLI::App app{ "execise-001" };
  try {
    app.parse(argc, argv);
  } catch (const CLI::ParseError &e) {
    return app.exit(e);
  }

  /**
   * The {fmt} lib is a cross platform library for printing and formatting text
   * it is much more convenient than std::cout and printf
   * More info at https://fmt.dev/latest/api.html 
   */
  fmt::print("Hello, {}!\n", app.get_name());


  /* INSERT YOUR CODE HERE */

  return 0; /* exit gracefully*/
}
