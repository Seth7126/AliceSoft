// 函数: sub_402bc0
// 地址: 0x402bc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_4 = arg1
void* ebp = arg2[4]
int32_t eax = 0
int32_t edi = 0xffffffff

if (ebp s> 0)
    int32_t ecx = arg2[5]
    
    do
        char* esi_1
        
        if (ecx u< 0x10)
            esi_1 = arg2
        else
            esi_1 = *arg2
        
        char* esi_2
        
        if (esi_1[eax] u>= 0x81)
            if (ecx u< 0x10)
                esi_2 = arg2
            else
                esi_2 = *arg2
        
        char* esi_3
        int32_t* esi_4
        
        if (esi_1[eax] u< 0x81 || esi_2[eax] u> 0x9f)
            if (ecx u< 0x10)
                esi_3 = arg2
            else
                esi_3 = *arg2
            
            if (esi_3[eax] u>= 0xe0)
                if (ecx u< 0x10)
                    esi_4 = arg2
                else
                    esi_4 = *arg2
        
        if ((esi_1[eax] u< 0x81 || esi_2[eax] u> 0x9f)
                && (esi_3[eax] u< 0xe0 || *(esi_4 + eax) u> 0xef))
            int32_t* esi_5
            
            if (ecx u< 0x10)
                esi_5 = arg2
            else
                esi_5 = *arg2
            
            if (*(esi_5 + eax) == 0x5c)
                edi = eax
            
            eax += 1
        else
            eax += 2
    while (eax s< ebp)
    
    if (edi != 0xffffffff)
        sub_403070(arg2, arg1, edi + 1, ebp)
        return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401ff0(arg1, arg2, 0, 0xffffffff)
return arg1
