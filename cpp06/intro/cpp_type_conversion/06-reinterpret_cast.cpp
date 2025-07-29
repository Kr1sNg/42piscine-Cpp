/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06-reinterpret_cast.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:14:00 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/29 18:28:02 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
🔹 3️⃣ reinterpret_cast
✅ Purpose:
	- Low-level, unsafe cast to reinterpret bits/pointers as another type.
	Doesn't change the actual data, just how the program views it.
	- Used for pointer-to-pointer, pointer-to-integer, or raw memory reinterpretation.
	
	<reinterpret_cast> is the most "dangerous" cast in C++
	as it can easily create undefined behaviour if used incorrectly.

🚫 Dangerous:
	- No type safety. Can easily cause undefined behavior if misused.
*/

#include <iostream>
#include <cstdint>

int main()
{
    int x = 65;
    void* p = &x;

    int* ip = reinterpret_cast<int*>(p);        // void* → int*
	std::cout << "ip: " << ip << std::endl;
    uintptr_t addr = reinterpret_cast<uintptr_t>(p);  // pointer → integer => not good result
	std::cout << "addr:" << addr << std::endl;
	
    char* cp = reinterpret_cast<char*>(&x);     // access raw byte
    std::cout << "First byte: " << *cp << std::endl;  // likely 'A'
}
