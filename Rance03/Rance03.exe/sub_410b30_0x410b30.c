// 函数: sub_410b30
// 地址: 0x410b30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* ebx = arg2
void* ebp = arg3
int32_t eax = *(ebx + 0x10)

if (eax u< ebp)
    sub_69a57f("invalid string position")
    noreturn

void* ecx = arg1[4]
void* eax_1 = eax - ebp
void* edi = arg4

if (eax_1 u< edi)
    edi = eax_1

if (0xffffffff - ecx u<= edi)
    sub_69a551("string too long")
    noreturn

if (edi != 0)
    char* eax_3 = ecx + edi
    
    if (sub_4022d0(arg1, eax_3, 0) != 0)
        int32_t eax_5 = arg1[5]
        int32_t* edx_1
        
        if (eax_5 u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        int32_t* eax_6
        
        if (eax_5 u< 0x10)
            eax_6 = arg1
        else
            eax_6 = *arg1
        
        void* ecx_2 = arg1[4]
        
        if (ecx_2 != 0)
            _memcpy(eax_6 + edi, edx_1, ecx_2)
        
        if (arg1 != ebx)
            if (*(ebx + 0x14) u>= 0x10)
                ebx = *ebx
            
            int32_t* ecx_4
            
            if (arg1[5] u< 0x10)
                ecx_4 = arg1
            else
                ecx_4 = *arg1
            
            if (edi != 0)
                sub_69d850(ecx_4, ebx + ebp, edi)
        else
            if (ebp != 0)
                ebp += edi
            
            int32_t eax_8 = arg1[5]
            int32_t* edx_2
            
            if (eax_8 u< 0x10)
                edx_2 = arg1
            else
                edx_2 = *arg1
            
            int32_t* ecx_3
            
            if (eax_8 u< 0x10)
                ecx_3 = arg1
            else
                ecx_3 = *arg1
            
            if (edi != 0)
                _memcpy(ecx_3, edx_2 + ebp, edi)
        
        sub_4022b0(arg1, eax_3)

return arg1
