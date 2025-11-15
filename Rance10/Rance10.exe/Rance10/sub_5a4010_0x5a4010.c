// 函数: sub_5a4010
// 地址: 0x5a4010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* j_2 = arg1
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4da637d, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_3 = edx_2 s>> 4
void* i = (edx_3 u>> 0x1f) - 1 + edx_3

if (i s> 0)
    void* j_1 = 1
    int32_t* ebx_1 = nullptr
    j_2 = 1
    int32_t edx_15
    
    do
        void* j = j_1
        int32_t eax_4
        int32_t edx_6
        edx_6:eax_4 = muls.dp.d(0x4da637d, *(arg1 + 8) - *(arg1 + 4))
        int32_t edx_7 = edx_6 s>> 4
        
        if (j_1 s< (edx_7 u>> 0x1f) + edx_7)
            void* edi_1 = &ebx_1[0xd3]
            int32_t edx_11
            
            do
                int32_t eax_8 = *(arg1 + 4)
                int32_t* esi_1 = edi_1 + eax_8
                
                if (*(ebx_1 + eax_8) == *esi_1)
                    *esi_1 = sub_5a3f70(arg1)
                
                j += 1
                int32_t eax_11
                int32_t edx_10
                edx_10:eax_11 = muls.dp.d(0x4da637d, *(arg1 + 8) - *(arg1 + 4))
                edi_1 += 0x34c
                edx_11 = edx_10 s>> 4
            while (j s< (edx_11 u>> 0x1f) + edx_11)
            j_1 = j_2
        
        j_1 += 1
        int32_t eax_15
        int32_t edx_14
        edx_14:eax_15 = muls.dp.d(0x4da637d, *(arg1 + 8) - *(arg1 + 4))
        ebx_1 = &ebx_1[0xd3]
        j_2 = j_1
        edx_15 = edx_14 s>> 4
        i = j_1 - 1
    while (i s< edx_15 - 1 + (edx_15 u>> 0x1f))

return i
