// 函数: sub_407870
// 地址: 0x407870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** ebp = arg2
int32_t eax = ebp[4]

if (eax u< arg3)
    sub_6d0947("invalid string position")
    noreturn

void* eax_1 = eax - arg3
void* ecx_1 = arg1[4]
void* edi = arg4

if (edi u> eax_1)
    edi = eax_1

if (not.d(ecx_1) u<= edi)
    sub_6d0927("string too long")
    noreturn

void* ebx = ecx_1 + edi

if (edi != 0)
    if (ebx u> 0xfffffffe)
        sub_6d0927("string too long")
        noreturn
    
    if (arg1[5] u>= ebx)
        if (ebx != 0)
            goto label_4078cd
        
        arg1[4] = ebx
        
        if (arg1[5] u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = ebx.b
        return arg1
    
    sub_403830(arg1, ebx, ecx_1)
    
    if (ebx != 0)
    label_4078cd:
        int32_t eax_4 = arg1[5]
        char* edx_1
        
        if (eax_4 u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        int32_t* eax_8
        
        if (eax_4 u< 0x10)
            eax_8 = arg1
        else
            eax_8 = *arg1
        
        void* ecx_3 = arg1[4]
        
        if (ecx_3 != 0)
            sub_6feca0(eax_8 + edi, edx_1, ecx_3)
        
        if (arg1 != ebp)
            if (ebp[5] u>= 0x10)
                ebp = *ebp
            
            char* ecx_5
            
            if (arg1[5] u< 0x10)
                ecx_5 = arg1
            else
                ecx_5 = *arg1
            
            if (edi != 0)
                sub_700660(ecx_5, arg3 + ebp, edi)
        else
            void* ecx_4 = arg3 + edi
            
            if (arg3 == 0)
                ecx_4 = arg3
            
            int32_t eax_11 = arg1[5]
            int32_t* ebp_1
            
            if (eax_11 u< 0x10)
                ebp_1 = arg1
            else
                ebp_1 = *arg1
            
            int32_t* edx_2
            
            if (eax_11 u< 0x10)
                edx_2 = arg1
            else
                edx_2 = *arg1
            
            if (edi != 0)
                sub_6feca0(edx_2, ecx_4 + ebp_1, edi)
        
        bool cond:1_1 = arg1[5] u< 0x10
        arg1[4] = ebx
        
        if (not(cond:1_1))
            *(*arg1 + ebx) = 0
            return arg1
        
        *(arg1 + ebx) = 0

return arg1
