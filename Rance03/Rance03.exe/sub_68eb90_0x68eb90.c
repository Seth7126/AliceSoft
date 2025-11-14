// 函数: sub_68eb90
// 地址: 0x68eb90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_5 = (arg2 - arg3) s/ 0x44
int32_t result
int32_t edx_3
edx_3:result = muls.dp.d(0x78787879, arg4 - arg3)
int32_t i_3 = i_5
int32_t i_6 = (arg4 - arg3) s/ 0x44
int32_t i_2 = i_6
int32_t i_4 = i_6

if (i_5 != 0)
    int32_t i
    
    do
        int32_t i_7 = i_4
        i_4 = i_3
        int32_t eax_1
        int32_t edx_5
        edx_5:eax_1 = sx.q(i_7)
        i = mods.dp.d(edx_5:eax_1, i_3)
        result = divs.dp.d(edx_5:eax_1, i_3)
        i_3 = i
    while (i != 0)
    i_2 = i_4

if (i_4 s< i_6 && i_4 s> 0)
    int32_t ebx_4 = i_5 * 0x44
    void* result_4 = arg3
    void* result_2 = result_4 + i_4 * 0x44
    int32_t i_1
    
    do
        void* result_3 = result_2 + ebx_4
        result = result_2
        
        if (result_3 == arg4)
            result_3 = result_4
        
        do
            sub_68ea50(result, result_3)
            void* result_1 = result_3
            int32_t eax_8 = (arg4 - result_3) s/ 0x44
            
            if (i_5 s>= eax_8)
                result_3 = arg3 + (i_5 - eax_8) * 0x44
            else
                result_3 += ebx_4
            
            result = result_1
        while (result_3 != result_2)
        
        result_2 -= 0x44
        i_1 = i_2 - 1
        i_2 = i_1
        result_4 = arg3
    while (i_1 s> 0)

return result
