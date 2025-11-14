// 函数: sub_402b00
// 地址: 0x402b00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_4 = arg1
void* ebx = arg2[4]
int32_t eax = 0

if (ebx s> 0)
    int32_t esi_1 = arg2[5]
    
    do
        char* ecx
        
        if (esi_1 u< 0x10)
            ecx = arg2
        else
            ecx = *arg2
        
        char* ecx_1
        
        if (ecx[eax] u>= 0x81)
            if (esi_1 u< 0x10)
                ecx_1 = arg2
            else
                ecx_1 = *arg2
        
        char* ecx_2
        int32_t* ecx_3
        
        if (ecx[eax] u< 0x81 || ecx_1[eax] u> 0x9f)
            if (esi_1 u< 0x10)
                ecx_2 = arg2
            else
                ecx_2 = *arg2
            
            if (ecx_2[eax] u>= 0xe0)
                if (esi_1 u< 0x10)
                    ecx_3 = arg2
                else
                    ecx_3 = *arg2
        
        if ((ecx[eax] u< 0x81 || ecx_1[eax] u> 0x9f)
                && (ecx_2[eax] u< 0xe0 || *(ecx_3 + eax) u> 0xef))
            int32_t* ecx_4
            
            if (esi_1 u< 0x10)
                ecx_4 = arg2
            else
                ecx_4 = *arg2
            
            if (*(ecx_4 + eax) == 0x5c)
                break
            
            eax += 1
        else
            eax += 2
    while (eax s< ebx)

if (eax s< ebx)
    sub_403070(arg2, arg1, eax + 1, ebx)
    return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401ff0(arg1, arg2, 0, 0xffffffff)
return arg1
