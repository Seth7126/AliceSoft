// 函数: ?fp_format_f_internal@@YAHQADIHQAU_strflt@@_NQAU__crt_locale_pointers@@@Z
// 地址: 0x716ced
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_20 = edi
void* var_14
_LocaleUpdate::_LocaleUpdate(&var_14, arg6)
void* edi_1 = arg3
int32_t ecx_2 = arg4[1] - 1

if (arg5 != 0 && ecx_2 == edi_1)
    void* eax_1
    eax_1.b = *arg4 == 0x2d
    *(eax_1 + ecx_2 + arg1) = 0x30

void* esi = arg1

if (*arg4 == 0x2d)
    *arg1 = 0x2d
    esi = &arg1[1]

int32_t eax_3 = arg4[1]
void* esi_1

if (eax_3 s> 0)
    esi_1 = esi + eax_3
else
    int32_t var_24_1 = 1
    void* var_28_1 = esi
    shift_bytes(arg1, arg2)
    *esi = 0x30
    esi_1 = esi + 1

if (edi_1 s> 0)
    int32_t var_24_2 = 1
    void* var_28_2 = esi_1
    shift_bytes(arg1, arg2)
    void* var_10
    char* eax_6
    eax_6.b = ***(var_10 + 0x88)
    *esi_1 = eax_6.b
    int32_t ecx_3 = arg4[1]
    
    if (ecx_3 s< 0)
        if (arg5 != 0 || neg.d(ecx_3) s< edi_1)
            edi_1 = neg.d(ecx_3)
        
        void* var_24_3 = edi_1
        void* var_28_3 = esi_1 + 1
        shift_bytes(arg1, arg2)
        _memset(esi_1 + 1, 0x30, edi_1)

char var_8

if (var_8 != 0)
    void* eax_10 = var_14
    *(eax_10 + 0x350) &= 0xfffffffd

return 0
