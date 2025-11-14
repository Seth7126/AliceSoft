// 函数: sub_5f03e0
// 地址: 0x5f03e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x24)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x24) = 0

int32_t ebx = *(arg1 + 0x18)

for (int32_t* i = *(arg1 + 0x14); i != ebx; i = &i[4])
    (**i)(0)

*(arg1 + 0x18) = *(arg1 + 0x14)
BOOL hObject = *(arg1 + 8)

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)
    
    if (hObject != 0)
        *(arg1 + 8) = 0xffffffff

return hObject
