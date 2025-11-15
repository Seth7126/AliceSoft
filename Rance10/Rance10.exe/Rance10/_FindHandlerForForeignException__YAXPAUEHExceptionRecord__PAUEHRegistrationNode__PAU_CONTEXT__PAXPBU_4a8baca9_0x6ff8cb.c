// 函数: ?FindHandlerForForeignException@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@HH1@Z
// 地址: 0x6ff8cb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
int32_t var_c = arg3
int32_t* edi = arg4

if (*edi == 0x80000003)
    return 

void* ebx_1 = arg8

if (*(sub_702f40() + 8) != 0)
    int32_t eax_1 = EncodePointer(nullptr)
    
    if (*(sub_702f40() + 8) == eax_1 || *edi == 0xe0434f4d || *edi == 0xe0434352)
        goto label_6ff935
    
    void** var_1c_1 = arg11
    
    if (sub_7002e9(edi, arg5, arg6, arg7, ebx_1, arg10) == 0)
        goto label_6ff935
    
    return 

label_6ff935:

if (*(ebx_1 + 0xc) == 0)
    _terminate()
    noreturn

arg1 = _GetRangeOfTrysToCheck(ebx_1, arg10, arg9, &var_c, &var_8)
int32_t ecx = var_c
int32_t edx = var_8

if (ecx u>= edx)
    return 

int32_t* esi_2 = arg1 + 0xc
arg1 = arg9

do
    if (arg1 s>= esi_2[-3] && arg1 s<= esi_2[-2])
        int32_t eax_4 = *esi_2 << 4
        
        if (*(esi_2[1] + eax_4 - 0xc) != 0)
            edx = var_8
            ebx_1 = arg8
        
        if (*(esi_2[1] + eax_4 - 0xc) == 0 || *(*(esi_2[1] + eax_4 - 0xc) + 8) == 0)
            char* eax_5 = eax_4 + esi_2[1] - 0x10
            
            if ((*eax_5 & 0x40) == 0)
                int32_t var_1c_3 = 1
                CatchIt(arg4, arg5, arg6, arg7, ebx_1, eax_5, nullptr, &esi_2[-3], arg10, arg11)
                edx = var_8
                ecx = var_c
        
        arg1 = arg9
    
    ecx += 1
    esi_2 = &esi_2[5]
    var_c = ecx
while (ecx u< edx)
