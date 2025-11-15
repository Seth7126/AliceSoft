// 函数: ?type_case_a@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 地址: 0x705506
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t edi
int32_t var_14 = edi
arg1[8] |= 0x10
int32_t eax = arg1[0xa]

if (eax s< 0)
    eax.b = *(arg1 + 0x31)
    
    if (eax.b == 0x61 || eax.b == 0x41)
        arg1[0xa] = 0xd
    else
        arg1[0xa] = 6
else if (eax == 0)
    eax.b = *(arg1 + 0x31)
    
    if (eax.b == 0x67 || eax.b == 0x47)
        arg1[0xa] = 1

char eax_3
int32_t edx
eax_3, edx = __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(&arg1[0x10], 
    arg1[0xa] + 0x15d)

if (eax_3 == 0)
    arg1[0xa] = __crt_stdio_output::formatting_buffer::count<char>(&arg1[0x10]) - 0x15d

void* eax_6 = arg1[0x111]

if (eax_6 == 0)
    eax_6 = &arg1[0x10]

var_c = nullptr
int32_t var_8_1 = 0
arg1[0xd] = eax_6
arg1[5] += 8
void* ecx_2 = arg1[5]
var_c = *(ecx_2 - 8)
int32_t var_8_2 = *(ecx_2 - 4)
uint32_t eax_9 = __crt_stdio_output::formatting_buffer::count<char>(&arg1[0x10])
void* ebx = arg1[0x111]

if (ebx == 0)
    ebx = &arg1[0x10]

int32_t var_1c_1 = arg1[2]
int32_t eax_10 = sx.d(*(arg1 + 0x31))
int32_t* var_20 = arg1[1]
int32_t var_24 = *arg1
int32_t* var_28 = arg1[0xa]
void* eax_11 = __crt_stdio_output::formatting_buffer::scratch_data<char>(&arg1[0x10])
___acrt_fp_format(&var_c, edx, &arg1[0x10], &var_c, ebx, 
    __crt_stdio_output::formatting_buffer::count<char>(&arg1[0x10]), eax_11, eax_9, eax_10, var_28, 
    var_24, var_20)

if (((arg1[8] u>> 5).b & 1) != 0 && arg1[0xa] == 0)
    __crt_stdio_output::force_decimal_point(arg1[0xd], arg1[2])

uint8_t eax_15 = *(arg1 + 0x31)

if ((eax_15 == 0x67 || eax_15 == 0x47) && ((arg1[8] u>> 5).b & 1) == 0)
    __crt_stdio_output::crop_zeroes(arg1[0xd], arg1[2])

char* result = arg1[0xd]

if (*result == 0x2d)
    arg1[8] |= 0x40
    arg1[0xd] = &result[1]

char* edx_1 = arg1[0xd]
result.b = *edx_1

if (result.b == 0x69 || result.b == 0x49 || result.b == 0x6e || result.b == 0x4e)
    *(arg1 + 0x31) = 0x73

char i

do
    i = *edx_1
    edx_1 = &edx_1[1]
while (i != 0)
result.b = 1
arg1[0xe] = edx_1 - &edx_1[1]
return result
