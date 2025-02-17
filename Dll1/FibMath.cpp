#include "pch.h"
#include <utility>
#include <limits.h>
#include "FibMath.h"

static unsigned long long previous_;
static unsigned long long current_;
static unsigned index_;

void fibonacci_init(
	static unsigned long long prev,
	static unsigned long long cur)
{
	index_ = 0;
	previous_ = prev;
	current_ = cur;
}

bool fibonacci_next()
{
	if ((ULLONG_MAX - previous_ < current_) || (UINT_MAX == index_))
	{
		return false;
	}
	else if (index_ > 0)
	{
		previous_ += current_;
	}
	std::swap(current_, previous_);
	++index_;
	return true;
}

unsigned long long fibonacci_current() {
	return current_;
}

unsigned fibonacci_index() {
	return index_;
}