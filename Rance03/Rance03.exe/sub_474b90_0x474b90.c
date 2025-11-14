// 函数: sub_474b90
// 地址: 0x474b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_4 = arg1
int32_t* esi = arg1

if ((*(*esi + 0x48))() != 0)
    (*(*esi + 0x4c))()

float arg_8
bool cond:0 = 1f <= arg_8
float* ecx_1 = &arg_8
var_4 = 0f
float arg_4
float edi = arg_4
arg_4 = 1f
esi[4] = edi

if (cond:0)
    ecx_1 = &arg_4

float* eax_4 = &var_4

if (*ecx_1 f> 0)
    eax_4 = ecx_1

esi[5] = *eax_4
float eax_5
eax_5.b = arg2
esi[3].b = eax_5.b

if (arg3 s< 0)
    esi[6] = 0
else if (arg3 s>= 8)
    int32_t var_10_1 = arg3
    sub_455870(0x6dd5b0)
    esi[6] = 0
else
    esi[6] = arg3

if (edi s> 0)
    HANDLE hEvent = esi[0xa]
    
    if (hEvent != 0)
        ResetEvent(hEvent)
    
    char result = (*(*esi + 0x50))()
    
    if (result == 0)
        return result
else
    int32_t* __saved_edi_4 = esi[0xb]
    int32_t* __saved_edi_1 = __saved_edi_4
    (*(*__saved_edi_4 + 0x1c))(esi[5])
    
    if (esi[3].b != 0)
        (*(*esi + 0x14))()

return 1
