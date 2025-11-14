// 函数: sub_64bd90
// 地址: 0x64bd90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t j_2 = (*(*arg2 + 0x10))()
int32_t* i_2 = (*(*arg2 + 0x14))()
char* ebx = (*(*(arg1 + 0xc) + 8))(0, 0)
int32_t eax_2 = (*(*(arg1 + 0xc) + 0x1c))()
char* esi_1 = (*(*arg2 + 0xc))(0, 0)
int32_t* i_1 = i_2
int32_t result = (*(*arg2 + 0x20))() - j_2
int32_t result_1 = result

if (i_1 s> 0)
    int32_t* i
    
    do
        if (j_2 s> 0)
            int32_t j_1 = j_2
            int32_t j
            
            do
                result.b = *ebx
                ebx = &ebx[3]
                *esi_1 = result.b
                esi_1 = &esi_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        esi_1 = &esi_1[result]
        ebx = &ebx[eax_2 - j_2 * 3]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
