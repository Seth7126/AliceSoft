// 函数: sub_692620
// 地址: 0x692620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d18d9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t var_4 = 0
struct dpsound::CSoundData::VTable** i = arg4

if (arg2 != i)
    void** edi_1 = arg2 + 0xc
    
    do
        void* ecx_3 = arg7
        struct dpsound::CSoundData::VTable** esi_1 = *(ecx_3 + 4)
        
        if (esi_1 u>= *(ecx_3 + 8))
            arg4 = esi_1
            struct dpsound::CSoundData::VTable** var_10_1 = esi_1
            var_4.b = 1
            
            if (esi_1 != 0)
                sub_68a6e0(esi_1, &edi_1[-3])
                ecx_3 = arg7
            
            var_4.b = 0
            *(ecx_3 + 4) += 0x44
            *(arg7 + 8) = *(ecx_3 + 4)
        else
            *(ecx_3 + 4) = &esi_1[0x11]
            void* eax_3
            eax_3.b = edi_1[-2].b
            esi_1[1].b = eax_3.b
            esi_1[2] = edi_1[-1]
            
            if (&esi_1[3] != edi_1)
                sub_401ff0(&esi_1[3], edi_1, 0, 0xffffffff)
            
            esi_1[9] = edi_1[6]
            sub_4a6db0(&esi_1[0xa], &edi_1[7])
            esi_1[0xd].b = edi_1[0xa].b
            esi_1[0xe] = edi_1[0xb]
            esi_1[0xf] = edi_1[0xc]
            esi_1[0x10] = edi_1[0xd]
        
        edi_1 = &edi_1[0x11]
    while (&edi_1[-3] != i)

int32_t var_4_1 = 0xffffffff
int32_t* esi_2 = arg5
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0
arg3[4] = arg7

if (esi_2 != 0)
    if (esi_2 != arg6)
        do
            (**esi_2)(0)
            esi_2 = &esi_2[0x11]
        while (esi_2 != arg6)
        
        esi_2 = arg5
    
    j__free(esi_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
