// 函数: sub_64e040
// 地址: 0x64e040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_520
int32_t var_4 = __security_cookie ^ &var_520
int32_t eax_1
eax_1.b = arg2
char var_51d = eax_1.b

if (arg4 s< 0 || arg4 s>= 4)
    *(*arg3 + 0x14) = 0x34
    *(*arg3 + 0x18) = arg4
    (**arg3)(arg3)
    eax_1.b = var_51d

int32_t ebp

if (eax_1.b == 0)
    ebp = arg3[arg4 + 0x22]
else
    ebp = arg3[arg4 + 0x1e]

int32_t var_518 = ebp

if (ebp == 0)
    *(*arg3 + 0x14) = 0x34
    *(*arg3 + 0x18) = arg4
    (**arg3)(arg3)

if (*arg5 == 0)
    *arg5 = (*arg3[1])(arg3, 1, 0x500)

int32_t eax_13 = *arg5
int32_t ecx = 0
void* i = 1
int32_t var_514 = 0
void* i_1 = 1
char var_108

do
    uint32_t esi_1 = zx.d(*(i + ebp))
    int32_t ebp_1 = esi_1 + ecx
    
    if (ebp_1 s> 0x100)
        *(*arg3 + 0x14) = 9
        (**arg3)(arg3)
        i = i_1
        ecx = var_514
    
    if (esi_1 != 0)
        int32_t eax_18 = zx.d(i.b) * 0x1010101
        int32_t ecx_3
        int32_t edi_2
        edi_2, ecx_3 = __memfill_u32(&(&var_108)[ecx], eax_18, esi_1 u>> 2)
        int32_t ecx_6
        int32_t edi_3
        edi_3, ecx_6 = __memfill_u8(edi_2, eax_18.b, esi_1 & 3)
        i = i_1
        ecx = ebp_1
        var_514 = ecx
    
    ebp = var_518
    i += 1
    i_1 = i
while (i s<= 0x10)

if (ecx u>= 0x101)
    ___report_rangecheckfailure()
    noreturn

(&var_108)[ecx] = 0
int32_t edi_4 = 0
i.b = var_108
int32_t esi_2 = 0
int32_t ebp_2 = sx.d(i.b)
int32_t var_50c[0x101]

if (i.b != 0)
    char* eax_19 = &var_108
    int32_t edx = rol.d(1, ebp_2.b)
    int32_t var_51c = edx
    
    do
        if (sx.d(*eax_19) == ebp_2)
            int32_t eax_21
            
            do
                char var_107[0x103]
                eax_21 = sx.d(var_107[esi_2])
                var_50c[esi_2] = edi_4
                esi_2 += 1
                edi_4 += 1
            while (eax_21 == ebp_2)
        
        if (edi_4 s>= edx)
            *(*arg3 + 0x14) = 9
            (**arg3)(arg3)
            edx = var_51c
        
        edx = rol.d(edx, 1)
        eax_19 = &(&var_108)[esi_2]
        var_51c = edx
        edi_4 *= 2
        ebp_2 += 1
    while (*eax_19 != 0)

_memset(eax_13 + 0x400, 0, 0x100)
int32_t result = 0xff

if (var_51d != 0)
    result = 0xf

int32_t esi_3 = 0
int32_t result_1 = result

if (var_514 s> 0)
    int32_t ecx_8 = var_518
    int32_t edx_1 = eax_13
    
    do
        char* edi_5 = zx.d(*(ecx_8 + esi_3 + 0x11))
        
        if (edi_5 u> result || *(edi_5 + eax_13 + 0x400) != 0)
            *(*arg3 + 0x14) = 9
            (**arg3)(arg3)
            ecx_8 = var_518
            edx_1 = eax_13
        
        *(edx_1 + (edi_5 << 2)) = var_50c[esi_3]
        int32_t eax_28
        eax_28.b = (&var_108)[esi_3]
        esi_3 += 1
        *(edi_5 + eax_13 + 0x400) = eax_28.b
        result = result_1
    while (esi_3 s< var_514)

@__security_check_cookie@4(var_4 ^ &var_520)
return result
