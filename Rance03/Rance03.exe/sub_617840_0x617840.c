// 函数: sub_617840
// 地址: 0x617840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdb38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
var_78 = ebx
int32_t* ebp = (*(*arg2 + 4))(eax_4)
int32_t* esi_1

if (ebp != 0)
    esi_1 = (*(*arg2 + 8))()

int32_t* result

if (ebp == 0 || esi_1 == 0)
    result.b = 0
else
    if ((**esi_1)() s> 0)
        int32_t* var_5c
        sub_42f420(&var_5c, (**esi_1)() << 3)
        int32_t var_4 = 0
        int32_t eax_12 = (**esi_1)()
        int32_t* edi_1 = var_5c
        
        if (eax_12 s> 0)
            void* ebx_1 = &edi_1[2]
            int32_t edi_2 = 0
            int32_t eax_17
            
            do
                void var_50
                sub_47b390(&var_50, (*(*ebp + 4))((*(*esi_1 + 4))(edi_2)))
                float var_6c
                sub_47c1a0(&var_50, &var_6c)
                edi_2 += 1
                int32_t eax_16 = *esi_1
                float xmm1_1 = var_6c
                *(ebx_1 - 8) = xmm1_1
                float var_68
                *(ebx_1 - 4) = var_68
                float var_64
                *ebx_1 = var_64
                float var_60
                *(ebx_1 + 4) = var_60
                float var_20
                float var_1c
                float var_18
                *(ebx_1 + 8) = (var_20 * var_60 + var_1c * var_64 - var_18 * var_68) * 0.5f
                *(ebx_1 + 0xc) = (var_1c * var_60 - var_20 * var_64 + var_18 * xmm1_1) * 0.5f
                *(ebx_1 + 0x10) = (var_20 * var_68 - var_1c * xmm1_1 + var_18 * var_60) * 0.5f
                *(ebx_1 + 0x14) = (var_20 * xmm1_1 + var_1c * var_68 + var_18 * var_64) * -0.5f
                ebx_1 += 0x20
                eax_17 = (*eax_16)()
            while (edi_2 s< eax_17)
            edi_1 = var_5c
            ebx = var_78
        
        int32_t ecx_11 = *ebx
        int32_t var_58
        sub_69d850(ecx_11 + ((((ebx[1] - ecx_11) s>> 2) - 0x400) << 2), edi_1, 
            (var_58 - edi_1) & 0xfffffffc)
        
        if (edi_1 != 0)
            j__free(edi_1)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
return result
