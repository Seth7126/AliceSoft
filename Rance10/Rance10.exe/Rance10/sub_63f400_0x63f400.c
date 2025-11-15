// 函数: sub_63f400
// 地址: 0x63f400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x28)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x28) = 0

int32_t ebx = *(arg1 + 0x1c)

for (int32_t* i = *(arg1 + 0x18); i != ebx; i = &i[4])
    (**i)(0)

*(arg1 + 0x1c) = *(arg1 + 0x18)
BOOL hObject = *(arg1 + 0xc)

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)
    
    if (hObject != 0)
        *(arg1 + 0xc) = 0xffffffff

return hObject
