// 函数: sub_402a20
// 地址: 0x402a20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_4 = arg1
int32_t ebp = arg2[4]
void* eax = nullptr
void* edi = 0xffffffff

if (ebp s> 0)
    int32_t esi_1 = arg2[5]
    
    do
        char* ecx
        
        if (esi_1 u< 0x10)
            ecx = arg2
        else
            ecx = *arg2
        
        char* ecx_1
        
        if (*(ecx + eax) u>= 0x81)
            if (esi_1 u< 0x10)
                ecx_1 = arg2
            else
                ecx_1 = *arg2
        
        char* ecx_2
        char* ecx_3
        
        if (*(ecx + eax) u< 0x81 || *(ecx_1 + eax) u> 0x9f)
            if (esi_1 u< 0x10)
                ecx_2 = arg2
            else
                ecx_2 = *arg2
            
            if (*(ecx_2 + eax) u>= 0xe0)
                if (esi_1 u< 0x10)
                    ecx_3 = arg2
                else
                    ecx_3 = *arg2
        
        if ((*(ecx + eax) u< 0x81 || *(ecx_1 + eax) u> 0x9f)
                && (*(ecx_2 + eax) u< 0xe0 || *(ecx_3 + eax) u> 0xef))
            char* ecx_4
            
            if (esi_1 u< 0x10)
                ecx_4 = arg2
            else
                ecx_4 = *arg2
            
            if (*(ecx_4 + eax) == 0x2e)
                edi = eax
            
            int32_t* ecx_5
            
            if (esi_1 u< 0x10)
                ecx_5 = arg2
            else
                ecx_5 = *arg2
            
            if (*(ecx_5 + eax) == 0x5c)
                edi = 0xffffffff
            
            eax += 1
        else
            eax += 2
    while (eax s< ebp)
    
    if (edi != 0xffffffff)
        sub_403070(arg2, arg1, 0, edi)
        return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401ff0(arg1, arg2, 0, 0xffffffff)
return arg1
