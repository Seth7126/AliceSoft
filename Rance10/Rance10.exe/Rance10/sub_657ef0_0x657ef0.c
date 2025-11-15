// 函数: sub_657ef0
// 地址: 0x657ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_52c
int32_t eax_1 = __security_cookie ^ &var_52c
int32_t ebx
ebx.b = arg2
char var_529 = ebx.b
int32_t* var_510 = arg3

if (arg4 s< 0 || arg4 s>= 4)
    *(*arg3 + 0x14) = 0x34
    *(*arg3 + 0x18) = arg4
    (**arg3)(arg3)

void* eax_6

if (ebx.b == 0)
    eax_6 = arg3[arg4 + 0x2c]
else
    eax_6 = arg3[arg4 + 0x28]

if (eax_6 == 0)
    *(*arg3 + 0x14) = 0x34
    *(*arg3 + 0x18) = arg4
    (**arg3)(arg3)

if (*arg5 == 0)
    *arg5 = (*arg3[1])(arg3, 1, 0x590)

int32_t eax_14 = *arg5
int32_t edx = 0
void* ecx = eax_6
void* i = 1
int32_t var_518 = 0
*(eax_14 + 0x8c) = ecx
char var_108
int32_t eax_15

do
    uint32_t esi_1 = zx.d(*(i + ecx))
    eax_15 = esi_1 + edx
    int32_t var_520_1 = eax_15
    
    if (eax_15 s> 0x100)
        *(*arg3 + 0x14) = 9
        (**arg3)(arg3)
        edx = var_518
    
    if (esi_1 != 0)
        eax_15.b = i.b
        void* edi_1 = &(&var_108)[edx]
        eax_15 = zx.d(eax_15.b) * 0x1010101
        edx = var_520_1
        var_518 = edx
        int32_t ecx_3
        int32_t edi_2
        edi_2, ecx_3 = __memfill_u32(edi_1, eax_15, esi_1 u>> 2)
        int32_t ecx_6
        int32_t edi_3
        edi_3, ecx_6 = __memfill_u8(edi_2, eax_15.b, esi_1 & 3)
    
    ecx = eax_6
    i += 1
while (i s<= 0x10)

if (edx u>= 0x101)
    ___report_rangecheckfailure()
    noreturn

(&var_108)[edx] = 0
int32_t edi_4 = 0
eax_15.b = var_108
int32_t esi_2 = 0
int32_t ebx_1 = sx.d(eax_15.b)
int32_t var_50c[0x101]

if (eax_15.b != 0)
    char* eax_20 = &var_108
    int32_t edx_1 = rol.d(1, ebx_1.b)
    int32_t var_524_1 = edx_1
    
    do
        if (sx.d(*eax_20) == ebx_1)
            int32_t eax_22
            
            do
                char var_107[0x103]
                eax_22 = sx.d(var_107[esi_2])
                var_50c[esi_2] = edi_4
                esi_2 += 1
                edi_4 += 1
            while (eax_22 == ebx_1)
        
        if (edi_4 s>= edx_1)
            *(*arg3 + 0x14) = 9
            (**arg3)(arg3)
            edx_1 = var_524_1
        
        edx_1 = rol.d(edx_1, 1)
        eax_20 = &(&var_108)[esi_2]
        var_524_1 = edx_1
        edi_4 *= 2
        ebx_1 += 1
    while (*eax_20 != 0)

void* ebp_1 = eax_6
int32_t edx_2 = 0

for (void* i_1 = 1; i_1 s<= 0x10; i_1 += 1)
    if (*(i_1 + ebp_1) == 0)
        *(eax_14 + (i_1 << 2)) = 0xffffffff
    else
        *(eax_14 + (i_1 << 2) + 0x48) = edx_2 - var_50c[edx_2]
        edx_2 += zx.d(*(i_1 + ebp_1))
        *(eax_14 + (i_1 << 2)) = (&var_510)[edx_2]

*(eax_14 + 0x44) = 0xfffff
uint32_t (* j)[0x4] = _memset(eax_14 + 0x90, 0, 0x400)
int32_t ecx_8 = 7
int32_t edx_3 = 0
int32_t var_520_2 = 7
int32_t var_524_2 = 0
char* ebx_3 = 1
int32_t temp0_1

do
    if (*(ebx_3 + ebp_1) u>= 1)
        j = 1 << ecx_8.b
        uint32_t (* j_1)[0x4] = j
        int32_t i_2 = 1
        char* edi_7 = eax_6 + 0x11 + edx_3
        
        do
            int32_t esi_4 = var_50c[edx_3] << ecx_8.b
            
            if (j s> 0)
                void* edx_5 = eax_14 + 0x490 + esi_4
                char** esi_6 = eax_14 + ((esi_4 + 0x24) << 2)
                
                do
                    *esi_6 = ebx_3
                    esi_6 = &esi_6[1]
                    int32_t ecx_9
                    ecx_9.b = *edi_7
                    edx_5 += 1
                    j -= 1
                    *(edx_5 - 1) = ecx_9.b
                while (j s> 0)
                
                edx_3 = var_524_2
                ecx_8 = var_520_2
            
            edx_3 += 1
            i_2 += 1
            var_524_2 = edx_3
            edi_7 = &edi_7[1]
            j = j_1
        while (i_2 s<= zx.d(*(ebx_3 + eax_6)))
        
        ebp_1 = eax_6
    
    ebx_3 = &ebx_3[1]
    temp0_1 = ecx_8
    ecx_8 -= 1
    var_520_2 = ecx_8
while (temp0_1 - 1 s>= 0)

if (var_529 != 0)
    int32_t edi_8 = 0
    
    if (var_518 s> 0)
        int32_t* esi_7 = var_510
        
        do
            if (*(edi_8 + ebp_1 + 0x11) u> 0xf)
                *(*esi_7 + 0x14) = 9
                j = (**esi_7)(esi_7)
            
            edi_8 += 1
        while (edi_8 s< var_518)

@__security_check_cookie@4(eax_1 ^ &var_52c)
return j
