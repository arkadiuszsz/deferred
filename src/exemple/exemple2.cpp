/*
 * Copyright 2012 Jerome Quere < contact@jeromequere.com >.
 *
 * This file is part of Deferred.
 *
 * Deferred is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Deferred is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Deferred.If not, see <http://www.gnu.org/licenses/>.
 */

#include "Deferred.hpp"
#include <iostream>

using namespace Df;

int main(int, char**)
{
  Deferred<int> d;
  Promise<int> p;
  Resolver<int> r;

  p = d.promise();
  r = d.resolver();

  p.fail([] (const std::string& error) {
      std::cout << "Error [" << error << "]" << std::endl;
    });
  r.reject("Oops");
  return 0;
}
