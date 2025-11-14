// 函数: sub_4028a0
// 地址: 0x4028a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_4 = arg1
int32_t ebx = arg2[4]
int32_t eax = 0
char* result = arg1

if (ebx s> 0)
    int32_t esi_1 = arg2[5]
    
    do
        char* ecx
        
        if (esi_1 u< 0x10)
            ecx = arg2
        else
            ecx = *arg2
        
        if (ecx[eax] u>= 0x81)
            if (esi_1 u< 0x10)
                arg1 = arg2
            else
                arg1 = *arg2
        
        if (ecx[eax] u>= 0x81 && arg1[eax] u<= 0x9f)
            eax += 2
            arg1.b = 0
        else
            char* ecx_1
            
            if (esi_1 u< 0x10)
                ecx_1 = arg2
            else
                ecx_1 = *arg2
            
            if (ecx_1[eax] u>= 0xe0)
                if (esi_1 u< 0x10)
                    arg1 = arg2
                else
                    arg1 = *arg2
            
            if (ecx_1[eax] u< 0xe0 || arg1[eax] u> 0xef)
                if (esi_1 u< 0x10)
                    arg1 = arg2
                else
                    arg1 = *arg2
                
                arg1.b = arg1[eax] == 0x5c
                eax += 1
            else
                eax += 2
                arg1.b = 0
    while (eax s< ebx)
    
    if (arg1.b != 0)
        *(result + 0x14) = 0xf
        *(result + 0x10) = 0
        *result = 0
        sub_401ff0(result, arg2, 0, 0xffffffff)
        return result

char* __saved_esi = arg1
sub_4032c0(result, arg2)
return result
