object Historie: THistorie
  Left = 660
  Top = 197
  BorderIcons = [biSystemMenu]
  Caption = 'Historie her'
  ClientHeight = 358
  ClientWidth = 512
  Color = clBtnFace
  Constraints.MaxHeight = 396
  Constraints.MaxWidth = 528
  Constraints.MinHeight = 396
  Constraints.MinWidth = 528
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 56
    Top = 13
    Width = 40
    Height = 13
    Caption = 'P'#345'ehled:'
  end
  object Memo1: TMemo
    Left = 56
    Top = 32
    Width = 329
    Height = 297
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object Button1: TButton
    Left = 408
    Top = 32
    Width = 81
    Height = 65
    Caption = 'smazat historii'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Konec: TButton
    Left = 408
    Top = 296
    Width = 81
    Height = 33
    Caption = 'Zav'#345#237't'
    TabOrder = 2
    OnClick = KonecClick
  end
end
