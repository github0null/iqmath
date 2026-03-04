#ifndef __CMSIS_SUPPORTH__
#define __CMSIS_SUPPORTH__

#include "cmsis_compiler.h"

#define __mpy_var_u16(name)
#define __mpy_start(dummy1, dummy2)
#define __mpyf_start(dummy1, dummy2)
#define __mpyfs_start(dummy1, dummy2)
#define __mpy_clear_ctl0()
#define __mpy_set_frac()
#define __mpy_stop(dummy1, dummy2)

////////////////////////////////////////////////////////////
//                                                        //
//                16-bit functions                        //
//                                                        //
////////////////////////////////////////////////////////////

__STATIC_FORCEINLINE int_fast16_t __mpy_w(int_fast16_t arg1, int_fast16_t arg2)
{
    return (arg1 * arg2);
}

__STATIC_FORCEINLINE uint_fast16_t __mpy_uw(uint_fast16_t arg1, uint_fast16_t arg2)
{
    return (arg1 * arg2);
}

__STATIC_FORCEINLINE int_fast32_t __mpyx_w(int_fast16_t arg1, int_fast16_t arg2)
{
    return ((int_fast32_t)arg1 * (int_fast32_t)arg2);
}

__STATIC_FORCEINLINE uint_fast32_t __mpyx_uw(uint_fast16_t arg1, uint_fast16_t arg2)
{
    return ((uint_fast32_t)arg1 * (uint_fast32_t)arg2);
}

__STATIC_FORCEINLINE int_fast16_t __mpyf_w(int_fast16_t arg1, int_fast16_t arg2)
{
    return (int_fast16_t)(((int_fast32_t)arg1 * (int_fast32_t)arg2) >> 15);
}

__STATIC_FORCEINLINE int_fast16_t __mpyf_w_reuse_arg1(int_fast16_t arg1, int_fast16_t arg2)
{
    /* This is identical to __mpyf_w */
    return (int_fast16_t)(((int_fast32_t)arg1 * (int_fast32_t)arg2) >> 15);
}

__STATIC_FORCEINLINE uint_fast16_t __mpyf_uw(uint_fast16_t arg1, uint_fast16_t arg2)
{
    return (uint_fast16_t)(((uint_fast32_t)arg1 * (uint_fast32_t)arg2) >> 15);
}

__STATIC_FORCEINLINE uint_fast16_t __mpyf_uw_reuse_arg1(uint_fast16_t arg1, uint_fast16_t arg2)
{
    /* This is identical to __mpyf_uw */
    return (uint_fast16_t)(((uint_fast32_t)arg1 * (uint_fast32_t)arg2) >> 15);
}

__STATIC_FORCEINLINE int_fast32_t __mpyfx_w(int_fast16_t arg1, int_fast16_t arg2)
{
    return (((int_fast32_t)arg1 * (int_fast32_t)arg2) << 1);
}

__STATIC_FORCEINLINE int_fast32_t __mpyfx_uw(uint_fast16_t arg1, uint_fast16_t arg2)
{
    return (((uint_fast32_t)arg1 * (uint_fast32_t)arg2) << 1);
}


////////////////////////////////////////////////////////////
//                                                        //
//                 32-bit functions                       //
//                                                        //
////////////////////////////////////////////////////////////

__STATIC_FORCEINLINE int_fast32_t __mpy_l(int_fast32_t arg1, int_fast32_t arg2)
{
    return (arg1 * arg2);
}

__STATIC_FORCEINLINE uint_fast32_t __mpy_ul(uint_fast32_t arg1, uint_fast32_t arg2)
{
    return (arg1 * arg2);
}

__STATIC_FORCEINLINE int_fast64_t __mpyx(int_fast32_t arg1, int_fast32_t arg2)
{
    return ((int_fast64_t)arg1 * (int_fast64_t)arg2);
}

__STATIC_FORCEINLINE uint_fast64_t __mpyx_u(uint_fast32_t arg1, uint_fast32_t arg2)
{
    return ((uint_fast64_t)arg1 * (uint_fast64_t)arg2);
}

__STATIC_FORCEINLINE int_fast32_t __mpyf_l(int_fast32_t arg1, int_fast32_t arg2)
{
    return (int_fast32_t)(((int_fast64_t)arg1 * (int_fast64_t)arg2) >> 31);
}

__STATIC_FORCEINLINE int_fast32_t __mpyf_l_reuse_arg1(int_fast32_t arg1, int_fast32_t arg2)
{
    /* This is identical to __mpyf_l */
    return (int_fast32_t)(((int_fast64_t)arg1 * (int_fast64_t)arg2) >> 31);
}

__STATIC_FORCEINLINE uint_fast32_t __mpyf_ul(uint_fast32_t arg1, uint_fast32_t arg2)
{
    return (uint_fast32_t)(((uint_fast64_t)arg1 * (uint_fast64_t)arg2) >> 31);
}

__STATIC_FORCEINLINE int_fast32_t __mpyf_ul_reuse_arg1(uint_fast32_t arg1, uint_fast32_t arg2)
{
    /* This is identical to __mpyf_ul */
    return (uint_fast32_t)(((uint_fast64_t)arg1 * (uint_fast64_t)arg2) >> 31);
}

__STATIC_FORCEINLINE int_fast64_t __mpyfx(int_fast32_t arg1, int_fast32_t arg2)
{
    return (((int_fast64_t)arg1 * (int_fast64_t)arg2) << 1);
}

__STATIC_FORCEINLINE uint_fast64_t __mpyfx_u(uint_fast32_t arg1, uint_fast32_t arg2)
{
    return (((uint_fast64_t)arg1 * (uint_fast64_t)arg2) << 1);
}

#endif //__CMSIS_SUPPORTH__
