// 函数: sub_5d97c0
// 地址: 0x5d97c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
void* esi = arg1
void* edi = arg2
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x38e38e39, *(edi + 0xa0) - *(edi + 0x9c))
int32_t edx_1 = edx s>> 4
int32_t ebx_2 = (edx_1 u>> 0x1f) + edx_1
uint32_t result = sub_5de860(esi, ebx_2)

if (result.b == 0)
    return result

int32_t ebp = 0

if (ebx_2 s> 0)
    void* ebx_3 = nullptr
    arg1 = nullptr
    
    while (true)
        int32_t eax_1
        int32_t edx_2
        edx_2:eax_1 = muls.dp.d(0x38e38e39, *(edi + 0xa0) - *(edi + 0x9c))
        int32_t edx_3 = edx_2 s>> 4
        
        if (ebp u< (edx_3 u>> 0x1f) + edx_3)
            void* edi_1 = *(edi + 0x9c)
            void* edi_2 = edi_1 + ebx_3
            
            if (edi_1 != neg.d(ebx_3))
                void* ebx_4 = *(edi_2 + 0x18)
                void* edi_3 = edi_2 + 8
                
                if (*(edi_3 + 0x14) u>= 0x10)
                    edi_3 = *edi_3
                
                if (ebx_4 == 0xffffffff)
                    goto label_5d9892
                
                void* ecx_7 = *(esi + 0x10)
                
                if (ecx_7 s< *(esi + 0x18) + ebx_4 + 1)
                    result = sub_64aeb0(esi + 8, ecx_7 + 0x40000 + ebx_4 + 1)
                
                if (ecx_7 s>= *(esi + 0x18) + ebx_4 + 1 || result.b != 0)
                    int32_t ecx_9
                    
                    if (*(esi + 0x10) != 0)
                        ecx_9 = *(esi + 0xc)
                    else
                        ecx_9 = 0
                    
                    sub_69d850(*(esi + 0x18) + ecx_9, edi_3, ebx_4 + 1)
                    *(esi + 0x18) += ebx_4 + 1
                label_5d9892:
                    ebp += 1
                    ebx_3 = arg1 + 0x48
                    arg1 = ebx_3
                    
                    if (ebp s>= ebx_2)
                        break
                    
                    edi = arg2
                    continue
        
        result.b = 0
        return result

result.b = 1
return result
