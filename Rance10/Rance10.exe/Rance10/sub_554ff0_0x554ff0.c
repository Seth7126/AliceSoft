// 函数: sub_554ff0
// 地址: 0x554ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_73abd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_80
int32_t eax_2 = __security_cookie ^ &var_80
fsbase->NtTib.ExceptionList = &ExceptionList
void* const ebx = arg2
void* const var_90 = ebx
*(arg1 + 0x2f5) = arg3
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_403490(&var_20, 0x75d41a, nullptr)
int32_t var_84_1 = 0
int32_t var_54 = 0xf
int32_t var_58 = 0
char var_68 = 0
sub_403490(&var_68, 0x76732c, 6)
var_84_1.b = 1
sub_403cd0(ebx, &var_80, &var_68, &var_20)

if (var_54 u>= 0x10)
    sub_403160(var_68.d, var_54 + 1, 1)

int32_t var_54_1 = 0xf
int32_t var_58_1 = 0
var_68 = 0
var_84_1.b = 4

if (var_c u>= 0x10)
    sub_403160(var_20.d, var_c + 1, 1)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0
int32_t var_3c = 0xf
int32_t var_40 = 0
char var_50 = 0
sub_403490(&var_50, 0x767320, 0xa)
var_84_1.b = 5
int32_t* edx = *(ebx + 4)
int32_t edi

if (edx != 0)
    char* ecx_4 = &var_50
    
    if (var_3c u>= 0x10)
        ecx_4 = var_50.d
    
    edi = (*(*edx + 8))(ecx_4, 0)
else
    edi = 0

var_84_1.b = 4

if (var_3c u>= 0x10)
    sub_403160(var_50.d, var_3c + 1, 1)

int32_t var_98
void** var_38

if (edi == 0)
    sub_553310(arg1, &var_80)
else if (edi == 1)
    sub_403360(&var_50, 0x767314)
    var_84_1.b = 6
    int32_t* edx_1 = *(ebx + 4)
    int32_t ebx_1
    
    if (edx_1 != 0)
        char* ecx_10 = &var_50
        
        if (var_3c u>= 0x10)
            ecx_10 = var_50.d
        
        ebx_1 = (*(*edx_1 + 0x2c))(ecx_10)
    else
        ebx_1 = 0
    
    struct common::CEXArrayReader::VTable* const var_9c_1 = &common::CEXArrayReader::`vftable'
    var_98 = ebx_1
    var_84_1.b = 8
    
    if (var_3c u>= 0x10)
        sub_403160(var_50.d, var_3c + 1, 1)
    
    int32_t var_3c_1 = 0xf
    int32_t var_40_1 = 0
    var_50 = 0
    int32_t eax_14
    
    if (ebx_1 != 0)
        eax_14 = (*(*ebx_1 + 8))(eax_2)
    else
        eax_14 = 0
    
    void* var_a8
    sub_422370(&var_a8, eax_14)
    int32_t edi_1 = 0
    var_84_1.b = 9
    
    if (eax_14 s> 0)
        void* ecx_14 = var_a8
        
        do
            int32_t eax_16
            
            if (ebx_1 != 0)
                eax_16 = (*(*ebx_1 + 0xc))(edi_1, 0)
                ecx_14 = var_a8
            else
                eax_16 = 0
            
            *(ecx_14 + (edi_1 << 2)) = eax_16
            edi_1 += 1
        while (edi_1 s< eax_14)
    
    sub_5533e0(arg1, &var_80, &var_a8)
    void* ecx_17 = var_a8
    int32_t var_a0
    
    if (ecx_17 != 0)
        sub_403160(ecx_17, (var_a0 - ecx_17) s>> 2, 4)
    var_84_1.b = 4
    ebx = var_90
else if (edi == 2)
    sub_403360(&var_38, 0x767308)
    var_84_1.b = 0xa
    int32_t* edx_2 = *(ebx + 4)
    int32_t var_24
    int32_t* edi_2
    
    if (edx_2 != 0)
        void** ecx_19 = &var_38
        
        if (var_24 u>= 0x10)
            ecx_19 = var_38
        
        edi_2 = (*(*edx_2 + 0x2c))(ecx_19)
    else
        edi_2 = nullptr
    
    struct common::CEXArrayReader::VTable* const var_b0_1 = &common::CEXArrayReader::`vftable'
    int32_t* var_ac_1 = edi_2
    var_84_1.b = 0xc
    sub_403320(&var_38)
    sub_403360(&var_50, 0x7672f4)
    var_84_1.b = 0xd
    int32_t* edx_3 = *(ebx + 4)
    int32_t* eax_23
    
    if (edx_3 != 0)
        char* ecx_23 = &var_50
        
        if (var_3c u>= 0x10)
            ecx_23 = var_50.d
        
        eax_23 = (*(*edx_3 + 0x2c))(ecx_23)
    else
        eax_23 = nullptr
    
    struct common::CEXArrayReader::VTable* const var_a4_1 = &common::CEXArrayReader::`vftable'
    int32_t* var_a0_1 = eax_23
    sub_403320(&var_50)
    struct textsurface::CTextSurfaceProperty::VTable* var_e4
    sub_6437f0(&var_e4)
    var_84_1.b = 0x10
    sub_403360(&var_38, 0x767494)
    var_84_1.b = 0x11
    int32_t* edx_4 = *(ebx + 4)
    int32_t eax_25
    
    if (edx_4 != 0)
        void** ecx_28 = &var_38
        
        if (var_24 u>= 0x10)
            ecx_28 = var_38
        
        eax_25 = (*(*edx_4 + 8))(ecx_28, 0)
    else
        eax_25 = 0
    
    int32_t var_e0_1 = eax_25
    var_84_1.b = 0x10
    sub_403320(&var_38)
    sub_403360(&var_38, 0x767484)
    var_84_1.b = 0x12
    int32_t* edx_5 = *(ebx + 4)
    int32_t eax_27
    
    if (edx_5 != 0)
        void** ecx_32 = &var_38
        
        if (var_24 u>= 0x10)
            ecx_32 = var_38
        
        eax_27 = (*(*edx_5 + 8))(ecx_32, 0)
    else
        eax_27 = 0
    
    int32_t var_dc_1 = eax_27
    var_84_1.b = 0x10
    sub_403320(&var_38)
    void* const eax_29
    int32_t ecx_35
    int32_t edx_6
    
    if (edi_2 != 0)
        void* eax_31 = (*(*edi_2 + 0xc))(2, 0)
        int32_t edx_7 = *edi_2
        var_90 = eax_31
        int32_t eax_32 = (*(edx_7 + 0xc))(1, 0)
        int32_t edx_8 = *edi_2
        var_98 = eax_32
        int32_t eax_33 = (*(edx_8 + 0xc))(0, 0)
        ecx_35 = var_98
        edx_6 = eax_33
        eax_29 = var_90
    else
        eax_29 = nullptr
        ecx_35 = 0
        edx_6 = 0
    
    void var_48
    int128_t var_d8_1 = *sub_402f50(&var_48, edx_6, ecx_35, eax_29, 0xff)
    sub_403360(&var_38, 0x767474)
    var_84_1.b = 0x13
    int32_t* edx_9 = *(ebx + 4)
    int32_t xmm0_2
    
    if (edx_9 != 0)
        void** ecx_41 = &var_38
        
        if (var_24 u>= 0x10)
            ecx_41 = var_38
        
        void** var_f8_7 = ecx_41
        (*(*edx_9 + 0xc))(ecx_41, 0)
        long double x87_r0
        var_98 = fconvert.s(x87_r0)
        xmm0_2 = var_98
    else
        xmm0_2 = (zx.o(0)).d
    
    int32_t var_c8_1 = xmm0_2
    var_84_1.b = 0x10
    sub_403320(&var_38)
    sub_403360(&var_38, 0x767464)
    var_84_1.b = 0x14
    int32_t* edx_10 = *(ebx + 4)
    int32_t xmm0_3
    
    if (edx_10 != 0)
        void** ecx_45 = &var_38
        
        if (var_24 u>= 0x10)
            ecx_45 = var_38
        
        void** var_f8_8 = ecx_45
        (*(*edx_10 + 0xc))(ecx_45, 0)
        var_98 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
        unimplemented  {fstp dword [ebp-0x18], st0}
        xmm0_3 = var_98
    else
        xmm0_3 = (zx.o(0)).d
    
    int32_t var_c4_1 = xmm0_3
    var_84_1.b = 0x10
    sub_403320(&var_38)
    int32_t eax_39
    void* const ecx_48
    int32_t edx_11
    
    if (eax_23 != 0)
        int32_t eax_41 = (*(*eax_23 + 0xc))(2, 0)
        int32_t edx_12 = *eax_23
        var_98 = eax_41
        void* eax_42 = (*(edx_12 + 0xc))(1, 0)
        int32_t edx_13 = *eax_23
        var_90 = eax_42
        int32_t eax_43 = (*(edx_13 + 0xc))(0, 0)
        ecx_48 = var_90
        edx_11 = eax_43
        eax_39 = var_98
    else
        eax_39 = nullptr
        ecx_48 = nullptr
        edx_11 = 0
    
    int128_t var_c0_1 = *sub_402f50(&var_48, edx_11, ecx_48, eax_39, 0xff)
    sub_5534b0(arg1, &var_e4)
    sub_403360(&var_38, 0x76745c)
    var_84_1.b = 0x15
    int32_t* edx_14 = *(ebx + 4)
    int32_t eax_45
    
    if (edx_14 != 0)
        void** ecx_55 = &var_38
        
        if (var_24 u>= 0x10)
            ecx_55 = var_38
        
        eax_45 = (*(*edx_14 + 8))(ecx_55, 0)
    else
        eax_45 = 0
    
    eax_45.b = eax_45 == 1
    
    if (*(arg1 + 0x2ac) != eax_45.b)
        *(arg1 + 0x2ac) = eax_45.b
        sub_553710(arg1)
    
    sub_403320(&var_38)
    var_84_1.b = 4

int32_t var_3c_2 = 0xf
int32_t var_40_2 = 0
var_50 = 0
sub_403490(&var_50, 0x767448, 0x12)
var_84_1.b = 0x16
int32_t* edx_15 = *(ebx + 4)
int32_t* edi_4

if (edx_15 != 0)
    char* ecx_60 = &var_50
    
    if (var_3c_2 u>= 0x10)
        ecx_60 = var_50.d
    
    edi_4 = (*(*edx_15 + 0x2c))(ecx_60)
else
    edi_4 = nullptr

struct common::CEXArrayReader::VTable* const var_a4_2 = &common::CEXArrayReader::`vftable'
int32_t* var_a0_2 = edi_4
var_84_1.b = 0x18

if (var_3c_2 u>= 0x10)
    sub_403160(var_50.d, var_3c_2 + 1, 1)

int32_t var_3c_3 = 0xf
int32_t var_40_3 = 0
var_50 = 0
int32_t eax_51
void* const ecx_62
int32_t edx_16

if (edi_4 != 0)
    int32_t eax_53 = (*(*edi_4 + 0xc))(3, 0)
    int32_t edx_17 = *edi_4
    var_98 = eax_53
    int32_t eax_54 = (*(edx_17 + 0xc))(2, 0)
    void* eax_55 = (*(*edi_4 + 0xc))(1, 0)
    int32_t edx_19 = *edi_4
    var_90 = eax_55
    int32_t* eax_56 = (*(edx_19 + 0xc))(0, 0)
    ecx_62 = var_90
    edi_4 = eax_56
    eax_51 = var_98
    edx_16 = eax_54
else
    eax_51 = 0
    edx_16 = 0
    ecx_62 = nullptr

if (*(arg1 + 0x2e0) != edi_4 || *(arg1 + 0x2e4) != ecx_62 || *(arg1 + 0x2ec) != edx_16
        || *(arg1 + 0x2f0) != eax_51)
    *(arg1 + 0x2e0) = edi_4
    *(arg1 + 0x2e4) = ecx_62
    *(arg1 + 0x2ec) = edx_16
    *(arg1 + 0x2f0) = eax_51
    *(arg1 + 0x2f4) = 1

int32_t var_c_2 = 0xf
int32_t var_10_2 = 0
var_20 = 0
sub_403490(&var_20, 0x767440, 4)
var_84_1.b = 0x19
int32_t* edx_20 = *(ebx + 4)
int32_t eax_57

if (edx_20 != 0)
    char* ecx_68 = &var_20
    
    if (var_c_2 u>= 0x10)
        ecx_68 = var_20.d
    
    eax_57 = (*(*edx_20 + 8))(ecx_68, 0)
else
    eax_57 = 0

*(arg1 + 0x2b0) = eax_57
sub_553710(arg1)
var_84_1.b = 0x18

if (var_c_2 u>= 0x10)
    sub_403160(var_20.d, var_c_2 + 1, 1)

int32_t var_c_3 = 0xf
int32_t var_10_3 = 0
var_20 = 0
sub_403490(&var_20, 0x767434, 0xa)
var_84_1.b = 0x1a
int32_t* edx_21 = *(ebx + 4)
int32_t eax_61

if (edx_21 != 0)
    char* ecx_72 = &var_20
    
    if (var_c_3 u>= 0x10)
        ecx_72 = var_20.d
    
    eax_61 = (*(*edx_21 + 8))(ecx_72, 0)
else
    eax_61 = 0

eax_61.b = eax_61 == 1

if (*(arg1 + 0x2b4) != eax_61.b)
    *(arg1 + 0x2b4) = eax_61.b
    sub_553710(arg1)

var_84_1.b = 0x18

if (var_c_3 u>= 0x10)
    sub_403160(var_20.d, var_c_3 + 1, 1)

int32_t var_c_4 = 0xf
int32_t var_10_4 = 0
var_20 = 0
sub_403490(&var_20, 0x76742c, 6)
var_84_1.b = 0x1b
int32_t* edx_22 = *(ebx + 4)
int32_t eax_65

if (edx_22 != 0)
    char* ecx_76 = &var_20
    
    if (var_c_4 u>= 0x10)
        ecx_76 = var_20.d
    
    eax_65 = (*(*edx_22 + 8))(ecx_76, 0)
else
    eax_65 = 0

if (*(arg1 + 0x2b8) != eax_65)
    *(arg1 + 0x2b8) = eax_65
    sub_553710(arg1)

var_84_1.b = 0x18

if (var_c_4 u>= 0x10)
    sub_403160(var_20.d, var_c_4 + 1, 1)

int32_t var_c_5 = 0xf
int32_t var_10_5 = 0
var_20 = 0
sub_403490(&var_20, 0x767424, 4)
var_84_1.b = 0x1c
int32_t* edx_23 = *(ebx + 4)
int32_t ecx_80

if (edx_23 != 0)
    char* ecx_81 = &var_20
    
    if (var_c_5 u>= 0x10)
        ecx_81 = var_20.d
    
    ecx_80 = (*(*edx_23 + 8))(ecx_81, 0)
else
    ecx_80 = 0

var_98 = ecx_80

if (*(arg1 + 0x2bc) != ecx_80)
    var_90 = nullptr
    void** eax_71 = &var_98
    
    if (ecx_80 s<= 0)
        eax_71 = &var_90
    
    *(arg1 + 0x2bc) = *eax_71
    sub_553710(arg1)

var_84_1.b = 0x18

if (var_c_5 u>= 0x10)
    sub_403160(var_20.d, var_c_5 + 1, 1)

int32_t var_24_1 = 0xf
int32_t var_28 = 0
var_38.b = 0
sub_403490(&var_38, 0x767414, 0xe)
var_84_1.b = 0x1d
int32_t* edx_24 = *(ebx + 4)
int32_t eax_75

if (edx_24 != 0)
    void** ecx_85 = &var_38
    
    if (var_24_1 u>= 0x10)
        ecx_85 = var_38
    
    eax_75 = (*(*edx_24 + 8))(ecx_85, 0)
else
    eax_75 = 0

eax_75.b = eax_75 == 1

if (*(arg1 + 0x2c0) != eax_75.b)
    *(arg1 + 0x2c0) = eax_75.b
    sub_553710(arg1)

if (var_24_1 u>= 0x10)
    sub_403160(var_38, var_24_1 + 1, 1)

int32_t var_6c

if (var_6c u>= 0x10)
    sub_403160(var_80, var_6c + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
