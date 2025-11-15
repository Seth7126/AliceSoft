// 函数: sub_5032f0
// 地址: 0x5032f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &partsengine::CGUIMessageList::`vftable'{for `partsengine::IEventObserver'}
sub_503370(&arg1[1])
int32_t* result = sub_503370(&arg1[4])
void* ecx = arg1[4]

if (ecx != 0)
    result = sub_403160(ecx, (arg1[6] - ecx) s>> 2, 4)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

void* ecx_1 = arg1[1]

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (arg1[3] - ecx_1) s>> 2, 4)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

return result
