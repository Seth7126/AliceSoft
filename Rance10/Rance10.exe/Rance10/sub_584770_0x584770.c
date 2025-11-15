// 函数: sub_584770
// 地址: 0x584770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d5b4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_58 = 0
sub_6ca100(arg2, *arg1)
void* ecx_1 = &arg1[1]
int32_t eax_4 = *(ecx_1 + 0x14)
void* edx

if (eax_4 u< 0x10)
    edx = ecx_1
else
    edx = *ecx_1

if (eax_4 u>= 0x10)
    ecx_1 = *ecx_1

int32_t* esi = arg2 + 4
int32_t var_78_1 = 0.d
sub_6ca200(esi, *(arg2 + 8), ecx_1, arg1[5] + edx)
bool var_45 = false
sub_4263a0(esi, &var_45)
EnterCriticalSection(arg1[0x1c] + 4)
int64_t xmm0 = *(arg1 + 0x60)
int32_t var_18 = arg1[0x1a]
LeaveCriticalSection(arg1[0x1c] + 4)
sub_6ca100(arg2, xmm0.d)
sub_6ca100(arg2, xmm0:4.d)
sub_6ca100(arg2, var_18)
sub_6ca100(arg2, arg1[0x1d])
sub_6ca100(arg2, arg1[0x1e])
sub_6ca100(arg2, arg1[0x1f])
sub_6ca100(arg2, arg1[0x30])
sub_6ca100(arg2, arg1[0x31])
sub_6ca100(arg2, arg1[0x32])
int32_t eax_12
int32_t edx_1
edx_1:eax_12 = muls.dp.d(0x2aaaaaab, arg1[0x34] - arg1[0x33])
int32_t edx_2 = edx_1 s>> 1
sub_6ca100(arg2, (edx_2 u>> 0x1f) + edx_2)
int32_t edi_1 = arg1[0x34]

for (int32_t* i = arg1[0x33]; i != edi_1; i = &i[3])
    sub_6ca100(arg2, *i)
    sub_6ca100(arg2, i[1])
    sub_6ca100(arg2, i[2])

sub_6ca100(arg2, (arg1[0x37] - arg1[0x36]) s>> 3)
int32_t edi_2 = arg1[0x37]

for (int32_t* i_1 = arg1[0x36]; i_1 != edi_2; i_1 = &i_1[2])
    sub_6ca100(arg2, *i_1)
    sub_6ca100(arg2, i_1[1])

sub_5874a0(&arg1[0x39], arg2)
void* edi_3 = arg2 + 4
var_45 = arg1[0x43].b != 0
sub_4263a0(edi_3, &var_45)
var_45 = *(arg1 + 0x10d) != 0
sub_4263a0(edi_3, &var_45)
var_45 = *(arg1 + 0x10e) != 0
sub_4263a0(edi_3, &var_45)
var_45 = false
sub_4263a0(edi_3, &var_45)
sub_6ca100(arg2, (arg1[0x45] - arg1[0x44]) s>> 2)
int32_t* esi_3 = arg1[0x44]
void* eax_27 = arg1[0x45]
uint32_t ecx_31 = (eax_27 - esi_3 + 3) u>> 2

if (esi_3 u> eax_27)
    ecx_31 = 0

if (ecx_31 != 0)
    int32_t edi_4 = 0
    
    do
        sub_6ca100(arg2, *esi_3)
        edi_4 += 1
        esi_3 = &esi_3[1]
    while (edi_4 != ecx_31)
    
    edi_3 = arg2 + 4

eax_27.b = arg1[0x47].b
var_45 = eax_27.b != 0
sub_4263a0(edi_3, &var_45)
sub_6ca100(arg2, arg1[0x5c])
sub_6ca100(arg2, arg1[0x5d])
sub_6ca100(arg2, arg1[0x5e])
sub_6ca100(arg2, arg1[0x5f])
sub_6ca100(arg2, arg1[0x60])
sub_6ca100(arg2, arg1[0x61])
sub_6ca100(arg2, arg1[0x62])
sub_6ca100(arg2, arg1[0x63])
sub_6ca100(arg2, arg1[0x64])
sub_6ca100(arg2, arg1[0x65])
sub_6ca100(arg2, arg1[0x66])
sub_6ca100(arg2, arg1[0x67])
sub_6ca100(arg2, arg1[0x68])
void* eax_28 = arg1[0x69]
char var_44
int32_t var_30
char var_2c
int64_t var_20
int32_t eax_30
char* ecx_48

if (eax_28 == 0)
    var_18 = 0xf
    var_20:4.d = 0
    var_2c = 0
    sub_403490(&var_2c, 0x75d4cf, nullptr)
    ecx_48 = &var_2c
    int32_t var_8_2 = 1
    eax_30 = 2
else
    var_30 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    sub_403590(&var_44, eax_28 + 8, 0, 0xffffffff)
    ecx_48 = &var_44
    int32_t var_8_1 = 0
    eax_30 = 1

int32_t var_58_1 = eax_30
char var_54
var_54.d = eax_30
void* eax_31 = *(ecx_48 + 0x10)
int32_t eax_32 = *(ecx_48 + 0x14)
char* edx_3

if (eax_32 u< 0x10)
    edx_3 = ecx_48
else
    edx_3 = *ecx_48

if (eax_32 u>= 0x10)
    ecx_48 = *ecx_48

int32_t var_78_42 = 0
sub_6ca200(edi_3, *(arg2 + 8), ecx_48, eax_31 + edx_3)
var_45 = false
sub_4263a0(edi_3, &var_45)
int32_t eax_35 = var_54.d

if ((eax_35.b & 2) != 0)
    eax_35 &= 0xfffffffd
    var_54.d = eax_35
    int32_t var_58_2 = eax_35
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
        eax_35 = var_54.d
    
    var_18 = 0xf
    var_20:4.d = 0
    var_2c = 0

int32_t var_8_3 = 0xffffffff

if ((eax_35.b & 1) != 0)
    int32_t eax_37 = eax_35 & 0xfffffffe
    var_54.d = eax_37
    int32_t var_58_3 = eax_37
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)

void* eax_40 = arg1[0x6b]
int32_t eax_43
char* ecx_54

if (eax_40 == 0)
    var_18 = 0xf
    var_20:4.d = 0
    var_2c = 0
    sub_403490(&var_2c, 0x75d4ce, nullptr)
    int32_t var_8_5 = 3
    ecx_54 = &var_2c
    eax_43 = var_54.d | 8
else
    var_30 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    sub_403590(&var_44, eax_40 + 8, 0, 0xffffffff)
    int32_t var_8_4 = 2
    ecx_54 = &var_44
    eax_43 = var_54.d | 4

int32_t var_58_4 = eax_43
var_54.d = eax_43
void* eax_45 = *(ecx_54 + 0x10)
int32_t eax_46 = *(ecx_54 + 0x14)
char* edx_4

if (eax_46 u< 0x10)
    edx_4 = ecx_54
else
    edx_4 = *ecx_54

if (eax_46 u>= 0x10)
    ecx_54 = *ecx_54

int32_t var_78_44 = 0
sub_6ca200(edi_3, *(arg2 + 8), ecx_54, eax_45 + edx_4)
var_45 = false
sub_4263a0(edi_3, &var_45)
int32_t eax_49 = var_54.d

if ((eax_49.b & 8) != 0)
    eax_49 &= 0xfffffff7
    var_54.d = eax_49
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
        eax_49 = var_54.d
    
    int32_t var_18_1 = 0xf
    var_20:4.d = 0
    var_2c = 0

int32_t var_8_6 = 0xffffffff

if ((eax_49.b & 4) != 0 && var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

var_45 = arg1[0x79].b != 0
sub_4263a0(edi_3, &var_45)
sub_6ca100(arg2, arg1[0x7a])
sub_6ca100(arg2, (arg1[0x7c] - arg1[0x7b]) s>> 2)
int32_t* esi_5 = arg1[0x7b]
int32_t eax_57 = arg1[0x7c]
uint32_t ecx_65 = (eax_57 - esi_5 + 3) u>> 2

if (esi_5 u> eax_57)
    ecx_65 = 0

if (ecx_65 != 0)
    int32_t edi_5 = 0
    
    do
        sub_6ca100(arg2, *esi_5)
        edi_5 += 1
        esi_5 = &esi_5[1]
    while (edi_5 != ecx_65)
    
    edi_3 = arg2 + 4

sub_6ca100(arg2, arg1[0x7e])
sub_6ca100(arg2, arg1[0x85])
var_45 = arg1[0x86] != 0
sub_4263a0(edi_3, &var_45)
void* ecx_70 = arg1[0x86]

if (ecx_70 != 0)
    sub_58a880(ecx_70, arg2)

sub_6ca100(arg2, (arg1[0x8d] - arg1[0x8c]) s>> 5)
int32_t edi_6 = arg1[0x8d]

for (void* i_2 = arg1[0x8c]; i_2 != edi_6; i_2 += 0x20)
    int32_t* i_4 = i_2 + 0x10
    int32_t j = 0
    int32_t j_1 = 0
    
    do
        int32_t* i_3 = i_2
        
        if (j != 0)
            i_3 = i_4
        
        sub_6ca100(arg2, *i_3)
        sub_6ca100(arg2, i_3[1])
        sub_6ca100(arg2, i_3[2])
        int32_t ebx_1 = i_3[3]
        var_45 = ebx_1.b
        sub_4263a0(arg2 + 4, &var_45)
        var_45 = (ebx_1 u>> 8).b
        sub_4263a0(arg2 + 4, &var_45)
        var_45 = (ebx_1 u>> 0x10).b
        sub_4263a0(arg2 + 4, &var_45)
        var_45 = (ebx_1 u>> 0x18).b
        sub_4263a0(arg2 + 4, &var_45)
        i_4 = i_2 + 0x10
        j = j_1 + 1
        j_1 = j
    while (j s< 2)

sub_6ca100(arg2, arg1[0x8f])
var_45 = arg1[0x90].b != 0
sub_4263a0(esi, &var_45)
var_45 = *(arg1 + 0x241) != 0
void* result = sub_4263a0(esi, &var_45)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
