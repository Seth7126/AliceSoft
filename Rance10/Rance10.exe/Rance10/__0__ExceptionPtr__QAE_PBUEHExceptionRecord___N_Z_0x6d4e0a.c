// 函数: ??0__ExceptionPtr@@QAE@PBUEHExceptionRecord@@_N@Z
// 地址: 0x6d4e0a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg2
int32_t i = 0
arg1[0x14].b = arg3
*arg1 = *ebx
arg1[1] = ebx[1]
arg1[2] = 0
arg1[3] = 0
int32_t eax_3 = ebx[4]
arg1[4] = eax_3

if (eax_3 != 0)
    void* edx_1 = &arg1[5]
    
    while (i u< 0xf)
        i += 1
        *edx_1 = *(ebx - arg1 + edx_1)
        edx_1 += 4
        
        if (i u>= arg1[4])
            break
    
    ebx = arg2

int32_t eax_5 = arg1[4]

if (eax_5 u< 0xf)
    __builtin_memset(&arg1[5 + eax_5], 0, (0xf - eax_5) << 2)

if (*ebx == 0xe06d7363 && ebx[4] == 3)
    int32_t eax_6 = ebx[5]
    
    if (eax_6 == 0x19930520 || eax_6 == 0x19930521 || eax_6 == 0x19930522 || eax_6 == 0x1994000)
        arg1[6] = 0
        void* edi_2 = ebx[7]
        int32_t* eax_7
        
        if (ebx[6] != 0 && edi_2 != 0)
            eax_7 = *(edi_2 + 0xc)
        
        if (ebx[6] == 0 || edi_2 == 0 || eax_7 == 0 || *eax_7 s<= 0)
            _terminate()
            noreturn
        
        int32_t eax_8
        int32_t ecx_1
        int32_t edx_2
        eax_8, ecx_1, edx_2 = EncodePointer(edi_2)
        arg1[7] = eax_8
        char* eax_10 = *(*(edi_2 + 0xc) + 4)
        char* eax_11
        
        if (arg3 == 0)
            eax_11 = _StaticAlloc(eax_10, edx_2, ecx_1, *(eax_10 + 0x14))
        else
            eax_11 = sub_705e22()
        
        if (eax_11 == 0)
            void var_14
            std::bad_alloc::bad_alloc(&var_14)
            sub_70021b(&var_14, &data_7db4ec)
            noreturn
        
        __ExceptionPtr::_CallCopyCtor(eax_11, ebx[6], *(eax_10 + 0x14), eax_10)
        arg1[6] = eax_11

return arg1
