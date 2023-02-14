object Mod: TMod
  Left = 720
  Top = 394
  BorderIcons = [biSystemMenu]
  Caption = 'MOD'
  ClientHeight = 299
  ClientWidth = 387
  Color = cl3DDkShadow
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 143
    Top = 130
    Width = 105
    Height = 13
    Align = alCustom
    AutoSize = False
    Caption = '   PROTI PO'#268#205'TA'#268'I:'
    Color = cl3DDkShadow
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Button1: TButton
    Left = 64
    Top = 40
    Width = 265
    Height = 65
    Caption = 'HR'#193#268' PROTI HR'#193#268'I'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button3: TButton
    Left = 64
    Top = 149
    Width = 65
    Height = 65
    Caption = 'ZA B'#205'L'#201
    TabOrder = 1
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 264
    Top = 149
    Width = 65
    Height = 65
    Caption = 'ZA '#268'ERN'#201
    TabOrder = 2
    OnClick = Button4Click
  end
  object RadioGroup1: TRadioGroup
    Left = 64
    Top = 220
    Width = 265
    Height = 49
    Caption = 'Obt'#237#382'nost'
    Columns = 3
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ItemIndex = 2
    Items.Strings = (
      'Hodn'#283' lehk'#225
      'Lehk'#225
      'St'#345'edn'#237)
    ParentFont = False
    TabOrder = 3
  end
  object Button2: TButton
    Left = 143
    Top = 149
    Width = 105
    Height = 65
    Caption = 'N'#193'HODN'#221' V'#221'B'#282'R'
    TabOrder = 4
    OnClick = Button2Click
  end
end
