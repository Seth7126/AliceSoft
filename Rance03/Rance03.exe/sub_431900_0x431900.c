// 函数: sub_431900
// 地址: 0x431900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b55eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
POINT point
int32_t eax_2 = __security_cookie ^ &point
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
point.x = arg5
uint32_t result
void* const var_464_1
char var_410[0x400]

if (arg4 - 0xa u> 0x25)
    result.b = 0
else
    switch (arg4 + &jump_table_431ad4[1]:2)
        case &lookup_table_431ae4, &lookup_table_431ae4[0x25]
            int32_t var_460_1 = arg5
            var_464_1 = &data_6db164
        label_4319f5:
            __swprintf_c(&var_410, 0x400, var_464_1)
            goto label_431a02
        case &lookup_table_431ae4[1]
            float xmm0[0x2]
            xmm0[0] = point.x
            xmm0[1] = point.x
            int32_t var_464
            var_464.q = _mm_cvtps_pd(xmm0)
            __swprintf_c(&var_410, 0x400, 0x6db168)
        label_431a02:
            GetCursorPos(&point)
            int32_t ecx_3 = point.x - 0x50
            int32_t eax_10 = point.y - 0xc
            int32_t var_43c_1 = 0
            struct win32only::CDialog::dpvariable::CInputDlg::VTable* const var_440 =
                &dpvariable::CInputDlg::`vftable'{for `win32only::CDialog'}
            int32_t var_424_1 = 0xf
            int32_t var_428_1 = 0
            char var_438 = 0
            int128_t var_420_1 = zx.o(0)
            int32_t var_4 = 0
            int32_t* ebx
            
            if (sub_428b30(&var_440, arg3, *(arg1 + 0x58), &var_410, ecx_3, eax_10).b != 0)
                char* eax_11 = &var_438
                
                if (var_424_1 u>= 0x10)
                    eax_11 = var_438.d
                
                sub_402670(arg2, eax_11)
                ebx.b = 1
            else
                ebx.b = 0
            
            var_440 = &dpvariable::CInputDlg::`vftable'{for `win32only::CDialog'}
            
            if (var_424_1 u>= 0x10)
                j__free(var_438.d)
            
            result.b = ebx.b
        case &lookup_table_431ae4[2]
            result = (*(**(*(arg1 + 0xe0) + 8) + 4))(arg5)
            
            if (result == 0)
                result.b = 0
            else
                result = (*(*result + 0x18))(eax_4)
                uint32_t result_2 = result
                int32_t edi_1 = result_2 + 1
                char i
                
                do
                    i = *result_2
                    result_2 += 1
                while (i != 0)
                
                if (result_2 - edi_1 u< 0x400)
                    uint32_t result_1 = result
                    var_464_1 = &data_6db174
                    goto label_4319f5
                
                result.b = 0
        case &lookup_table_431ae4[3], &lookup_table_431ae4[4], &lookup_table_431ae4[5], 
                &lookup_table_431ae4[6], &lookup_table_431ae4[7], &lookup_table_431ae4[8], 
                &lookup_table_431ae4[9], &lookup_table_431ae4[0xa], &lookup_table_431ae4[0xb], 
                &lookup_table_431ae4[0xc], &lookup_table_431ae4[0xd], &lookup_table_431ae4[0xe], 
                &lookup_table_431ae4[0xf], &lookup_table_431ae4[0x10], &lookup_table_431ae4[0x11], 
                &lookup_table_431ae4[0x12], &lookup_table_431ae4[0x13], &lookup_table_431ae4[0x14], 
                &lookup_table_431ae4[0x15], &lookup_table_431ae4[0x16], &lookup_table_431ae4[0x17], 
                &lookup_table_431ae4[0x18], &lookup_table_431ae4[0x19], &lookup_table_431ae4[0x1a], 
                &lookup_table_431ae4[0x1b], &lookup_table_431ae4[0x1c], &lookup_table_431ae4[0x1d], 
                &lookup_table_431ae4[0x1e], &lookup_table_431ae4[0x1f], &lookup_table_431ae4[0x20], 
                &lookup_table_431ae4[0x21], &lookup_table_431ae4[0x22], &lookup_table_431ae4[0x23], 
                &lookup_table_431ae4[0x24]
            result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &point)
return result
