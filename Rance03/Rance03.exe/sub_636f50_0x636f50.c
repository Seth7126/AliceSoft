// 函数: sub_636f50
// 地址: 0x636f50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_2 = (*(*arg2 + 8))(0, *(arg1 + 0xc) - 1)
int32_t ebx = *(arg1 + 8)
void* esi = eax_2
int32_t* result = neg.d((*(*arg2 + 0x1c))()) - (ebx << 2)
int32_t i = 0
void* ecx_4 = arg3 + 0x12
arg2 = result

if (*(arg1 + 0xc) s> 0)
    do
        int32_t edx_1 = 0
        
        if (ebx s> 0)
            do
                edx_1 += 1
                *esi = *(ecx_4 + 2)
                *(esi + 1) = *(ecx_4 + 1)
                *(esi + 2) = *ecx_4
                char eax_9 = *(ecx_4 + 3)
                ecx_4 += 4
                *(esi + 3) = eax_9
                esi += 4
                ebx = *(arg1 + 8)
            while (edx_1 s< ebx)
            
            result = arg2
        
        i += 1
        esi += result
    while (i s< *(arg1 + 0xc))

return result
