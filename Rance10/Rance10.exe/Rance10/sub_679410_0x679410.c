// 函数: sub_679410
// 地址: 0x679410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg1
int32_t ebx = 0
int32_t ebp = 0
int32_t result = edi[1]
arg1 = result
int32_t* i_2 = *(result + 0x44)
int32_t* i = i_2

if (i != 0)
    do
        if (*i == 0)
            ebx += i[3] * i[2]
            ebp += i[1] * i[2]
        
        i = i[9]
    while (i != 0)
    
    result = arg1

for (int32_t* i_1 = *(result + 0x48); i_1 != 0; i_1 = i_1[9])
    if (*i_1 == 0)
        ebx += (i_1[3] * i_1[2]) << 7
        result = (i_1[1] * i_1[2]) << 7
        ebp += result

if (ebx s> 0)
    for (; i_2 != 0; i_2 = i_2[9])
        if (*i_2 == 0)
            int32_t ebx_1 = i_2[3]
            int32_t ecx_1
            
            if (divu.dp.d(0:(ecx_1 - 1), ebx_1) s>= 0x3b9aca00)
                i_2[4] = ebx_1 * 0x3b9aca00
                *(*edi + 0x14) = 0x33
                (**edi)(edi)
                *(i_2 + 0x22) = 1
            else
                i_2[4] = i_2[1]
            
            *i_2 = sub_6791d0(edi, 1, i_2[2], i_2[4])
            result = arg1[0x14]
            i_2[5] = result
            i_2[6] = 0
            i_2[7] = 0
            *(i_2 + 0x21) = 0
    
    for (void** i_3 = arg1[0x12]; i_3 != 0; i_3 = i_3[9])
        if (*i_3 == 0)
            int32_t ebx_2 = i_3[3]
            int32_t ecx_2
            
            if (divu.dp.d(0:(ecx_2 - 1), ebx_2) s>= 0x3b9aca00)
                i_3[4] = ebx_2 * 0x3b9aca00
                *(*edi + 0x14) = 0x33
                (**edi)(edi)
                *(i_3 + 0x22) = 1
            else
                i_3[4] = i_3[1]
            
            *i_3 = sub_679280(edi, 1, i_3[2], i_3[4])
            result = arg1[0x14]
            i_3[5] = result
            i_3[6] = 0
            i_3[7] = 0
            *(i_3 + 0x21) = 0

return result
