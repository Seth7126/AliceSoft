// 函数: sub_6ae150
// 地址: 0x6ae150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_4f8
int32_t eax_1 = __security_cookie ^ &var_4f8
var_4f8 = nullptr
int32_t var_4e0 = 0
char eax_2 = (*(arg1 + 0x74)).b

if ((eax_2 & 1) == 0)
    sub_6a7750(arg1, "missing IHDR")
    noreturn

void* arg_4

if ((eax_2 & 6) != 0)
    sub_6ace40(arg1, arg_4)
    int32_t eax_3 = sub_6a77d0(arg1, "out of place")
    @__security_check_cookie@4(eax_1 ^ &var_4f8)
    return eax_3

void* ebp = arg_4

if (ebp u< 9)
    sub_6ace40(arg1, ebp)
    int32_t eax_4 = sub_6a77d0(arg1, "too short")
    @__security_check_cookie@4(eax_1 ^ &var_4f8)
    return eax_4

int16_t eax_5 = *(arg1 + 0x326)

if (eax_5 s< 0)
    int32_t eax_6 = sub_6ace40(arg1, ebp)
    @__security_check_cookie@4(eax_1 ^ &var_4f8)
    return eax_6

uint32_t eax_44

if ((eax_5.b & 4) != 0)
    var_4f8 = "too many profiles"
label_6ae757:
    sub_6ace40(arg1, ebp)
label_6ae75c:
    *(arg1 + 0x326) |= 0x8000
    
    if (arg2 != 0)
        int32_t eax_52 = *(arg1 + 0x324)
        *(arg2 + 0x28) = *(arg1 + 0x2dc)
        *(arg2 + 0x38) = *(arg1 + 0x2ec)
        *(arg2 + 0x48) = *(arg1 + 0x2fc)
        *(arg2 + 0x58) = *(arg1 + 0x30c)
        *(arg2 + 0x68) = *(arg1 + 0x31c)
        *(arg2 + 0x70) = eax_52
        sub_6a4da0(arg1, arg2)
    
    eax_44 = var_4f8
    
    if (eax_44 != 0)
        eax_44 = sub_6a77d0(arg1, eax_44)
else
    int32_t eax_7 = *(arg1 + 0x5c)
    void* edi_1 = 0x51
    
    if (ebp u< 0x51)
        edi_1 = ebp
    
    if (eax_7 == 0)
        sub_6a7500(arg1, "Call to NULL read function")
        noreturn
    
    void* var_50c = edi_1
    char var_4dc
    sub_6a4030(eax_7(arg1, &var_4dc, var_50c), &var_4dc, arg1, edi_1)
    arg_4 = ebp - edi_1
    void* esi_1 = nullptr
    void* eax_9 = &var_4e0:3
    int32_t ecx_9 = 3
    ebp = arg_4
    int32_t edx_4 = 1
    
    while (esi_1 u< edi_1)
        if (*(eax_9 + edx_4) == 0)
            break
        
        if (edx_4 u>= edi_1 || (&var_4dc)[edx_4] == 0)
            esi_1 += 1
            break
        
        if (ecx_9 - 1 u>= edi_1 || *(&var_4e0:3 + ecx_9) == 0)
            esi_1 += 2
            break
        
        if (ecx_9 u>= edi_1 || (&var_4dc)[ecx_9] == 0)
            esi_1 += 3
            break
        
        char var_4d8[0x50]
        
        if (esi_1 + 4 u>= edi_1 || *(&var_4d8 + esi_1) == 0)
            esi_1 += 4
            break
        
        eax_9 = &var_4e0:3
        edx_4 += 5
        esi_1 += 5
        ecx_9 += 5
        
        if (edx_4 u>= 0x51)
            break
        
        continue
    
    if (esi_1 - 1 u> 0x4e)
        var_4f8 = "bad keyword"
        goto label_6ae757
    
    void var_4db
    
    if (esi_1 + 1 u>= edi_1 || *(&var_4db + esi_1) != 0)
        var_4f8 = "bad compression method"
        goto label_6ae757
    
    void* eax_15
    void** ecx_11
    eax_15, ecx_11 = sub_6acfe0(arg1, 0x69434350)
    
    if (eax_15 != 0)
        var_4f8 = *(arg1 + 0x9c)
        goto label_6ae757
    
    uint32_t var_4f4 = 0x84
    void var_4da
    *(arg1 + 0x84) = &var_4da + esi_1
    var_50c = nullptr
    *(arg1 + 0x88) = edi_1 - esi_1 - 2
    char var_488
    void var_404
    sub_6ad470(&arg_4, &var_404, arg1, ecx_11, &arg_4, &var_488, &var_4f4)
    
    if (var_4f4 != 0)
    label_6ae6f2:
        var_4f8 = *(arg1 + 0x9c)
    label_6ae6ff:
        bool cond:0_1 = var_4e0 != 0
        *(arg1 + 0x80) = 0
        
        if (cond:0_1)
            goto label_6ae75c
        
        ebp = arg_4
        goto label_6ae757
    
    char var_487
    char var_486
    char var_485
    uint32_t ecx_19 =
        (((((zx.d(var_488) << 8) + zx.d(var_487)) << 8) + zx.d(var_486)) << 8) + zx.d(var_485)
    var_4f4 = ecx_19
    
    if (ecx_19 u< 0x84)
        var_50c = "too short"
    label_6ae3ca:
        sub_6a5720(&var_4dc, arg1 + 0x2dc, arg1, &var_4dc, ecx_19, var_50c)
        goto label_6ae6ff
    
    if ((ecx_19.b & 3) != 0)
        var_50c = "invalid length"
        goto label_6ae3ca
    
    var_50c = zx.d(*(arg1 + 0x157))
    
    if (sub_6a5a40(&var_4dc, arg1 + 0x2dc, arg1, &var_4dc, ecx_19, &var_488, var_50c.b) == 0)
        goto label_6ae6ff
    
    uint32_t ebp_2 = var_4f4
    char var_408
    char var_407
    char var_406
    char var_405
    uint32_t edx_14 =
        (((((zx.d(var_408) << 8) + zx.d(var_407)) << 8) + zx.d(var_406)) << 8) + zx.d(var_405)
    void* eax_28 = *(arg1 + 0x2b8)
    uint32_t var_4ec_2 = edx_14
    void* var_4e4_1 = eax_28
    
    if (eax_28 == 0)
    label_6ae48a:
        
        if (ebp_2 != 0)
            int32_t eax_29 = *(arg1 + 0x274)
            var_50c = ebp_2
            
            if (eax_29 == 0)
                eax_28 = sub_705e22()
            else
                eax_28 = eax_29(arg1)
            
            var_4e4_1 = eax_28
        
        if (ebp_2 == 0 || eax_28 == 0)
            var_4f8 = "out of memory"
            goto label_6ae6ff
        
        edx_14 = var_4ec_2
        *(arg1 + 0x2b8) = eax_28
        *(arg1 + 0x2bc) = ebp_2
    else if (ebp_2 u> *(arg1 + 0x2bc))
        int32_t ecx_22 = *(arg1 + 0x278)
        *(arg1 + 0x2b8) = 0
        *(arg1 + 0x2bc) = 0
        var_50c = eax_28
        
        if (ecx_22 == 0)
            _free(var_50c)
        else
            ecx_22(arg1)
        
        goto label_6ae48a
    
    __builtin_memcpy(eax_28, &var_488, 0x84)
    var_50c = nullptr
    uint32_t edi_6 = edx_14 * 0xc
    var_4f4 = edi_6
    sub_6ad470(&arg_4, &var_404, arg1, &var_4f4, &arg_4, eax_28 + 0x84, &var_4f4)
    
    if (var_4f4 != 0)
        goto label_6ae6f2
    
    var_50c = var_4e4_1
    int32_t eax_33
    void** ecx_25
    eax_33, ecx_25 = sub_6a5d50(&var_4dc, arg1 + 0x2dc, arg1, &var_4dc, ebp_2, var_50c)
    
    if (eax_33 == 0)
        goto label_6ae6ff
    
    var_4f4 = ebp_2 - edi_6 - 0x84
    var_50c = 1
    sub_6ad470(&arg_4, &var_404, arg1, ecx_25, &arg_4, var_4e4_1 + ((var_4ec_2 * 3 + 0x21) << 2), 
        &var_4f4)
    void* edi_7 = arg_4
    
    if (edi_7 != 0 && (*(arg1 + 0x78) & 0x100000) == 0)
        var_4f8 = "extra compressed data"
        goto label_6ae6ff
    
    if (var_4f4 != 0)
        var_4f8 = "truncated"
        goto label_6ae6ff
    
    if (edi_7 != 0)
        sub_6a7780(arg1, "extra compressed data")
    
    int32_t eax_43 = sub_6ace40(arg1, edi_7)
    var_50c = *(arg1 + 0xb4)
    var_4e0 = 1
    eax_44 = sub_6a5e70(eax_43, var_4e4_1, arg1, var_50c)
    
    if (eax_44 != 0)
        uint32_t eax_47 = zx.d(*(var_4e4_1 + 0x43))
        var_50c = (((((zx.d(*(var_4e4_1 + 0x40)) << 8) + zx.d(*(var_4e4_1 + 0x41))) << 8)
            + zx.d(*(var_4e4_1 + 0x42))) << 8) + eax_47
        eax_44 = sub_6a5910(eax_47, arg1 + 0x2dc, arg1, var_50c)
    
    char* ebp_3
    
    if (arg2 != 0)
        var_50c = nullptr
        sub_6a4450(eax_44, arg2, arg1, 0x10, var_50c)
        char* eax_48 = sub_6a7b70(arg1, esi_1 + 1)
        *(arg2 + 0x74) = eax_48
        
        if (eax_48 == 0)
            ebp_3 = "out of memory"
            *(arg1 + 0x326) |= 0x8000
            var_4f8 = "out of memory"
        else
            var_50c = esi_1 + 1
            sub_700660(eax_48, &var_4dc, var_50c)
            *(arg2 + 0xe8) |= 0x10
            *(arg2 + 8) |= 0x1000
            *(arg2 + 0x7c) = ebp_2
            ebp_3 = nullptr
            *(arg2 + 0x78) = var_4e4_1
            *(arg1 + 0x2b8) = 0
        
        *(arg2 + 0x28) = *(arg1 + 0x2dc)
        *(arg2 + 0x38) = *(arg1 + 0x2ec)
        *(arg2 + 0x48) = *(arg1 + 0x2fc)
        *(arg2 + 0x58) = *(arg1 + 0x30c)
        int32_t eax_50 = *(arg1 + 0x324)
        *(arg2 + 0x68) = *(arg1 + 0x31c)
        *(arg2 + 0x70) = eax_50
        eax_44 = sub_6a4da0(arg1, arg2)
    
    if (arg2 != 0 && ebp_3 != 0)
        goto label_6ae6ff
    
    *(arg1 + 0x80) = 0

@__security_check_cookie@4(eax_1 ^ &var_4f8)
return eax_44
