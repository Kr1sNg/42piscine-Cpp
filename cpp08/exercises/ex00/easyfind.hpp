/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:01:24 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/09 08:57:12 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASY_
# define _EASY_

# include <algorithm>   //std::find
# include <stdexcept>   //std::runtime_error

// iterators, like pointer, are used to access and iterate through elements of data structures
// by "pointing" them.
// data structures that support iterators: vector, list, deque, map, set
// (stack and queue do not)

template <typename T>
// using typename here for indicating that a dependent name is a type
// helps the compiler knows for sure that T::iterator is a type !!
typename T::iterator    easyfind(T &container, int value)   //modifiable
{
    typename T::iterator    it = std::find(container.begin(), container.end(), value);
    if (it == container.end())  // come after the last elem of container
        throw (std::runtime_error("Value not found"));
    return (it);
}

template <typename T>
typename T::const_iterator   easyfind(T const &container, int value) //read-only
{
    typename T::const_iterator   it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw (std::runtime_error("Value not found"));
    return (it);
}

#endif
