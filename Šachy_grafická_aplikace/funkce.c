#include "hlavicky.h"
#include "sachy.h"
int vlastnisachb(int pole[9][9])
{
	int a;
	int b;
	int c;
	int d;
	int z=0;
	int pom=0;
	for(b=1;b!=9;b++)
	{
		for(a=1;a!=9;a++)
		{
			z=0;
			if(pole[a][b]>=7 && pole[a][b]<=12)
			{
				if(pole[a][b]==7)
				{
					if(a==8)
					{
						if(pole[(a-1)][(b-1)]==6)
						{
							pom=23;
						}
					}
					else
					{
						if(a==1)
						{
							if(pole[(a+1)][(b-1)]==6)
							{
								pom=23;
							}
						}
						else
						{
                         	if(pole[(a-1)][(b-1)]==6)
							{
								pom=23;
							}
							else
							{
                              	if(pole[(a+1)][(b-1)]==6)
								{
									pom=23;
								}
                            }
						}
					}
				}
				if(pole[a][b]==8)
				{
																 //2. kvadrant
					if(a==1 && b==1)
					{
						if(pole[a+2][b+1]==6 || pole[a+1][b+2]==6)
						{
							pom=23;
						}
					}
					else
					{
						if(a==2 && b==1)
						{
							if(pole[a+2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6)
							{
								pom=23;
							}
						}
						else
						{
							if(a==2 && b==2)
							{
								if(pole[a+2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a+2][b-1]==6)
								{
									pom=23;
								}
							}
							else
							{
								if(a==1 && b==2)
								{
									if(pole[a+2][b+1]==6 || pole[a+1][b+2]==6 || pole[a+2][b-1]==6)
									{
										pom=23;
									}
								}
								else
								{
																		 //4. kvadrant
									if(a==8 && b==8)
									{
										if(pole[a-2][b-1]==6 || pole[a-1][b-2]==6)
										{
											pom=23;
										}
									}
									else
									{
										if(a==7 && b==8)
										{
											if(pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
											{
												pom=23;
											}
										}
										else
										{
											if(a==7 && b==7)
											{
												if(pole[a-2][b+1]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
												{
													pom=23;
												}
											}
											else
											{
												if(a==8 && b==7)
												{
													if(pole[a-2][b+1]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6)
													{
														pom=23;
													}
												}
												else
												{
																			//1.kvadrant
													if(a==1 && b==8)
													{
														if(pole[a+2][b-1]==6 ||	pole[a+1][b-2]==6)
														{
															pom=23;
														}
													}
													else
													{
														if(a==1 && b==7)
														{
															if(pole[a+2][b+1]==6 || pole[a+2][b-1]==6 || pole[a+1][b-2]==6)
															{
																pom=23;
															}
														}
														else
														{
															if(a==2 && b==8)
															{
																if(pole[a+2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																{
																	pom=23;
																}
															}
															else
															{
																if(a==2 && b==7)
																{
																	if(pole[a+2][b+1]==6 || pole[a+2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																	{
																		pom=23;
																	}
																}
																else
																{
																								//3. kvadrant
																	if(a==8 && b==1)
																	{
																		if(pole[a-2][b+1]==6 || pole[a-1][b+2]==6)
																		{
																			pom=23;
																		}
																	}
																	else
																	{
																		if(a==8 && b==2)
																		{
																			if(pole[a-2][b+1]==6 || pole[a-1][b+2]==6 || pole[a-2][b-1]==6)
																			{
																				pom=23;
                                                                            }
																		}
																		else
																		{
																			if(a==7 && b==1)
																			{
																				if(pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6)
																				{
																					pom=23;
                                                                                }
																			}
																			else
																			{
																				if(a==7 && b==2)
																				{
																					if(pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a-2][b-1]==6)
																					{
																						pom=23;
                                                                                    }
																				}
																				else
																				{
																					if(a==1)
																					{
																						if(pole[a+2][b+1]==6 ||  pole[a+1][b+2]==6 || pole[a+2][b-1]==6 || pole[a+1][b-2]==6)
																						{
																							pom=23;
																						}
																					}
																					else
																					{
																						if(a==2)
																						{
																							if(pole[a+2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a+2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																							{
																								pom=23;
																							}
																						}
																						else
																						{
																							if(a==7)
																							{
																								if(pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																								{
																									pom=23;
                                                                                                }
																							}
																							else
																							{
																								if(a==8)
																								{
																									if(pole[a-2][b+1]==6 || pole[a-1][b+2]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6)
																									{
																										pom=23;
																									}
																								}
																								else
																								{
																									if(b==1)
																									{
																										if(pole[a+2][b+1]==6 || pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6)
																										{
																											pom=23;
																										}
																									}
																									else
																									{
																										if(b==2)
																										{
																											if(pole[a+2][b+1]==6 || pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a+2][b-1]==6 || pole[a-2][b-1]==6)
																											{
																												pom=23;
																											}
																										}
																										else
																										{
																											if(b==7)
																											{
																												if(pole[a+2][b+1]==6 || pole[a-2][b+1]==6 || pole[a+2][b-1]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																												{
																													pom=23;
                                                                                                                }
																											}
																											else
																											{
																												if(b==8)
																												{
																													if(pole[a+2][b-1]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																													{
																														pom=23;
																													}
																												}
																												else
																												{
																													if(a>2 && a<7)
																													{
																														if(b>2 && b<7)
																														{
																															if(pole[a+2][b+1]==6 || pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a+2][b-1]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																															{
																																pom=23;
																															}
																														}
																													}
																												}
																											}
																										}
                                                                                                    }
                                                                                                }
																							}
                                                                                        }
                                                                                    }
																				}
                                                                            }
                                                                        }
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if(pole[a][b]==9)
				{
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
						pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
						pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
						pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
						pom=23;
						}
					}
				}
			if(pole[a][b]==10)
				{
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
				}
					if(pole[a][b]==11)
				{
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
				}
				if(pole[a][b]==12)
				{
					if(a==1 && b==1)
					{
						if(pole[a+1][b+1]==6 || pole[a+1][b]==6 || pole[a][b+1]==6)
						{
							pom=23;
						}
					}
					else
					{
						if(a==1 && b==8)
						{
							if(pole[a+1][b]==6 || pole[a+1][b-1]==6 || pole[a][b-1]==6)
							{
								pom=23;
							}
						}
						else
						{
							if(a==8 && b==1)
							{
								if(pole[a][b+1]==6 || pole[a-1][b+1]==6  || pole[a-1][b]==6)
								{
									pom=23;
								}
							}
							else
							{
								if(a==8 && b==8)
								{
									if(pole[a][b-1]==6 || pole[a-1][b]==6 || pole[a-1][b-1]==6)
									{
										pom=23;
									}
								}
								else
								{
									if(a==1)
									{
										if(pole[a+1][b+1]==6 || pole[a+1][b]==6 || pole[a+1][b-1]==6 || pole[a][b+1]==6 || pole[a][b-1]==6)
										{
											pom=23;
                                        }
									}
									else
									{
										if(a==8)
										{
											if(pole[a][b+1]==6 || pole[a][b-1]==6 || pole[a-1][b+1]==6  || pole[a-1][b]==6 || pole[a-1][b-1]==6)
											{
												pom=23;
											}
										}
										else
										{
											if(b==1)
											{
												if(pole[a+1][b+1]==6 || pole[a+1][b]==6 || pole[a][b+1]==6 || pole[a-1][b+1]==6  || pole[a-1][b]==6)
												{
													pom=23;
												}
											}
											else
											{
												if(b==8)
												{
													if(pole[a+1][b]==6 || pole[a+1][b-1]==6 || pole[a][b-1]==6 || pole[a-1][b]==6 || pole[a-1][b-1]==6)
													{
														pom=23;
													}
												}
												else
												{
													if(pole[a+1][b+1]==6 || pole[a+1][b]==6 || pole[a+1][b-1]==6 || pole[a][b+1]==6 || pole[a][b-1]==6 || pole[a-1][b+1]==6  || pole[a-1][b]==6 || pole[a-1][b-1]==6)
													{
														pom=23;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return pom;
}
int vlastnisachc(int pole[9][9])
{
	int a;
	int b;
	int c;
	int d;
	int z=0;
	int pom=0;
	for(b=1;b!=9;b++)
	{
		for(a=1;a!=9;a++)
		{
			z=0;
			if(pole[a][b]>=1 && pole[a][b]<=6)
			{
				if(pole[a][b]==1)
				{
					if(a==1)
					{
						if(pole[(a+1)][(b+1)]==12)
						{
							pom=23;
						}
					}
					else
					{
						if(a==8)
						{
							if(pole[(a-1)][(b+1)]==12)
							{
								pom=23;
							}
						}
						else
						{
							if(pole[(a+1)][(b+1)]==12)
							{
								pom=23;
							}
							else
							{
								if(pole[(a-1)][(b+1)]==12)
								{
									pom=23;
								}
							}
						}
					}
				}
				if(pole[a][b]==2)
				{
																 //2. kvadrant
					if(a==1 && b==1)
					{
						if(pole[a+2][b+1]==12 || pole[a+1][b+2]==12)
						{
							pom=23;
						}
					}
					else
					{
						if(a==2 && b==1)
						{
							if(pole[a+2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12)
							{
								pom=23;
							}
						}
						else
						{
							if(a==2 && b==2)
							{
								if(pole[a+2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a+2][b-1]==12)
								{
									pom=23;
								}
							}
							else
							{
								if(a==1 && b==2)
								{
									if(pole[a+2][b+1]==12 || pole[a+1][b+2]==12 || pole[a+2][b-1]==12)
									{
										pom=23;
									}
								}
								else
								{
																		 //4. kvadrant
									if(a==8 && b==8)
									{
										if(pole[a-2][b-1]==12 || pole[a-1][b-2]==12)
										{
											pom=23;
										}
									}
									else
									{
										if(a==7 && b==8)
										{
											if(pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
											{
												pom=23;
											}
										}
										else
										{
											if(a==7 && b==7)
											{
												if(pole[a-2][b+1]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
												{
													pom=23;
												}
											}
											else
											{
												if(a==8 && b==7)
												{
													if(pole[a-2][b+1]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12)
													{
														pom=23;
													}
												}
												else
												{
																			//1.kvadrant
													if(a==1 && b==8)
													{
														if(pole[a+2][b-1]==12 ||	pole[a+1][b-2]==12)
														{
															pom=23;
														}
													}
													else
													{
														if(a==1 && b==7)
														{
															if(pole[a+2][b+1]==12 || pole[a+2][b-1]==12 || pole[a+1][b-2]==12)
															{
																pom=23;
															}
														}
														else
														{
															if(a==2 && b==8)
															{
																if(pole[a+2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																{
																	pom=23;
																}
															}
															else
															{
																if(a==2 && b==7)
																{
																	if(pole[a+2][b+1]==12 || pole[a+2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																	{
																		pom=23;
																	}
																}
																else
																{
																								//3. kvadrant
																	if(a==8 && b==1)
																	{
																		if(pole[a-2][b+1]==12 || pole[a-1][b+2]==12)
																		{
																			pom=23;
																		}
																	}
																	else
																	{
																		if(a==8 && b==2)
																		{
																			if(pole[a-2][b+1]==12 || pole[a-1][b+2]==12 || pole[a-2][b-1]==12)
																			{
																				pom=23;
                                                                            }
																		}
																		else
																		{
																			if(a==7 && b==1)
																			{
																				if(pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12)
																				{
																					pom=23;
                                                                                }
																			}
																			else
																			{
																				if(a==7 && b==2)
																				{
																					if(pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a-2][b-1]==12)
																					{
																						pom=23;
                                                                                    }
																				}
																				else
																				{
																					if(a==1)
																					{
																						if(pole[a+2][b+1]==12 ||  pole[a+1][b+2]==12 || pole[a+2][b-1]==12 || pole[a+1][b-2]==12)
																						{
																							pom=23;
																						}
																					}
																					else
																					{
																						if(a==2)
																						{
																							if(pole[a+2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a+2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																							{
																								pom=23;
																							}
																						}
																						else
																						{
																							if(a==7)
																							{
																								if(pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																								{
																									pom=23;
                                                                                                }
																							}
																							else
																							{
																								if(a==8)
																								{
																									if(pole[a-2][b+1]==12 || pole[a-1][b+2]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12)
																									{
																										pom=23;
																									}
																								}
																								else
																								{
																									if(b==1)
																									{
																										if(pole[a+2][b+1]==12 || pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12)
																										{
																											pom=23;
																										}
																									}
																									else
																									{
																										if(b==2)
																										{
																											if(pole[a+2][b+1]==12 || pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a+2][b-1]==12 || pole[a-2][b-1]==12)
																											{
																												pom=23;
																											}
																										}
																										else
																										{
																											if(b==7)
																											{
																												if(pole[a+2][b+1]==12 || pole[a-2][b+1]==12 || pole[a+2][b-1]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																												{
																													pom=23;
                                                                                                                }
																											}
																											else
																											{
																												if(b==8)
																												{
																													if(pole[a+2][b-1]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																													{
																														pom=23;
																													}
																												}
																												else
																												{
																													if(a>2 && a<7)
																													{
																														if(b>2 && b<7)
																														{
																															if(pole[a+2][b+1]==12 || pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a+2][b-1]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																															{
																																pom=23;
																															}
																														}
																													}
																												}
																											}
																										}
                                                                                                    }
                                                                                                }
																							}
                                                                                        }
                                                                                    }
																				}
                                                                            }
                                                                        }
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if(pole[a][b]==3)
				{
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
				}
			if(pole[a][b]==4)
				{
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
				}
			if(pole[a][b]==5)
				{
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
						pom=23;
						}
					}
				}
				if(pole[a][b]==6)
				{
					if(a==1 && b==1)
					{
						if(pole[a+1][b+1]==12 || pole[a+1][b]==12 || pole[a][b+1]==12)
						{
							pom=23;
						}
					}
					else
					{
						if(a==1 && b==8)
						{
							if(pole[a+1][b]==12 || pole[a+1][b-1]==12 || pole[a][b-1]==12)
							{
								pom=23;
							}
						}
						else
						{
							if(a==8 && b==1)
							{
								if(pole[a][b+1]==12 || pole[a-1][b+1]==12  || pole[a-1][b]==12)
								{
									pom=23;
								}
							}
							else
							{
								if(a==8 && b==8)
								{
									if(pole[a][b-1]==12 || pole[a-1][b]==12 || pole[a-1][b-1]==12)
									{
										pom=23;
									}
								}
								else
								{
									if(a==1)
									{
										if(pole[a+1][b+1]==12 || pole[a+1][b]==12 || pole[a+1][b-1]==12 || pole[a][b+1]==12 || pole[a][b-1]==12)
										{
											pom=23;
                                        }
									}
									else
									{
										if(a==8)
										{
											if(pole[a][b+1]==12 || pole[a][b-1]==12 || pole[a-1][b+1]==12  || pole[a-1][b]==12 || pole[a-1][b-1]==12)
											{
												pom=23;
											}
										}
										else
										{
											if(b==1)
											{
												if(pole[a+1][b+1]==12 || pole[a+1][b]==12 || pole[a][b+1]==12 || pole[a-1][b+1]==12  || pole[a-1][b]==12)
												{
													pom=23;
												}
											}
											else
											{
												if(b==8)
												{
													if(pole[a+1][b]==12 || pole[a+1][b-1]==12 || pole[a][b-1]==12 || pole[a-1][b]==12 || pole[a-1][b-1]==12)
													{
														pom=23;
													}
												}
												else
												{
													if(pole[a+1][b+1]==12 || pole[a+1][b]==12 || pole[a+1][b-1]==12 || pole[a][b+1]==12 || pole[a][b-1]==12 || pole[a-1][b+1]==12  || pole[a-1][b]==12 || pole[a-1][b-1]==12)
													{
														pom=23;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return pom;
}
int sachc(int pole[9][9])
{
	int a;
	int b;
	int c;
	int d;
	int z=0;
	int pom=0;
	for(b=1;b!=9;b++)
	{
		for(a=1;a!=9;a++)
		{
			z=0;
			if(pole[a][b]>=7 && pole[a][b]<=12)
			{
            	if(pole[a][b]==7)
				{
					if(a==8)
					{
						if(pole[(a-1)][(b-1)]==6)
						{
							pom=23;
						}
					}
					else
					{
						if(a==1)
						{
							if(pole[(a+1)][(b-1)]==6)
							{
								pom=23;
							}
						}
						else
						{
                         	if(pole[(a-1)][(b-1)]==6)
							{
								pom=23;
							}
							else
							{
                              	if(pole[(a+1)][(b-1)]==6)
								{
									pom=23;
								}
                            }
						}
					}
				}
				if(pole[a][b]==8)
				{
																 //2. kvadrant
					if(a==1 && b==1)
					{
						if(pole[a+2][b+1]==6 || pole[a+1][b+2]==6)
						{
							pom=23;
						}
					}
					else
					{
						if(a==2 && b==1)
						{
							if(pole[a+2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6)
							{
								pom=23;
							}
						}
						else
						{
							if(a==2 && b==2)
							{
								if(pole[a+2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a+2][b-1]==6)
								{
									pom=23;
								}
							}
							else
							{
								if(a==1 && b==2)
								{
									if(pole[a+2][b+1]==6 || pole[a+1][b+2]==6 || pole[a+2][b-1]==6)
									{
										pom=23;
									}
								}
								else
								{
																		 //4. kvadrant
									if(a==8 && b==8)
									{
										if(pole[a-2][b-1]==6 || pole[a-1][b-2]==6)
										{
											pom=23;
										}
									}
									else
									{
										if(a==7 && b==8)
										{
											if(pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
											{
												pom=23;
											}
										}
										else
										{
											if(a==7 && b==7)
											{
												if(pole[a-2][b+1]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
												{
													pom=23;
												}
											}
											else
											{
												if(a==8 && b==7)
												{
													if(pole[a-2][b+1]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6)
													{
														pom=23;
													}
												}
												else
												{
																			//1.kvadrant
													if(a==1 && b==8)
													{
														if(pole[a+2][b-1]==6 ||	pole[a+1][b-2]==6)
														{
															pom=23;
														}
													}
													else
													{
														if(a==1 && b==7)
														{
															if(pole[a+2][b+1]==6 || pole[a+2][b-1]==6 || pole[a+1][b-2]==6)
															{
																pom=23;
															}
														}
														else
														{
															if(a==2 && b==8)
															{
																if(pole[a+2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																{
																	pom=23;
																}
															}
															else
															{
																if(a==2 && b==7)
																{
																	if(pole[a+2][b+1]==6 || pole[a+2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																	{
																		pom=23;
																	}
																}
																else
																{
																								//3. kvadrant
																	if(a==8 && b==1)
																	{
																		if(pole[a-2][b+1]==6 || pole[a-1][b+2]==6)
																		{
																			pom=23;
																		}
																	}
																	else
																	{
																		if(a==8 && b==2)
																		{
																			if(pole[a-2][b+1]==6 || pole[a-1][b+2]==6 || pole[a-2][b-1]==6)
																			{
																				pom=23;
                                                                            }
																		}
																		else
																		{
																			if(a==7 && b==1)
																			{
																				if(pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6)
																				{
																					pom=23;
                                                                                }
																			}
																			else
																			{
																				if(a==7 && b==2)
																				{
																					if(pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a-2][b-1]==6)
																					{
																						pom=23;
                                                                                    }
																				}
																				else
																				{
																					if(a==1)
																					{
																						if(pole[a+2][b+1]==6 ||  pole[a+1][b+2]==6 || pole[a+2][b-1]==6 || pole[a+1][b-2]==6)
																						{
																							pom=23;
																						}
																					}
																					else
																					{
																						if(a==2)
																						{
																							if(pole[a+2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a+2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																							{
																								pom=23;
																							}
																						}
																						else
																						{
																							if(a==7)
																							{
																								if(pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																								{
																									pom=23;
                                                                                                }
																							}
																							else
																							{
																								if(a==8)
																								{
																									if(pole[a-2][b+1]==6 || pole[a-1][b+2]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6)
																									{
																										pom=23;
																									}
																								}
																								else
																								{
																									if(b==1)
																									{
																										if(pole[a+2][b+1]==6 || pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6)
																										{
																											pom=23;
																										}
																									}
																									else
																									{
																										if(b==2)
																										{
																											if(pole[a+2][b+1]==6 || pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a+2][b-1]==6 || pole[a-2][b-1]==6)
																											{
																												pom=23;
																											}
																										}
																										else
																										{
																											if(b==7)
																											{
																												if(pole[a+2][b+1]==6 || pole[a-2][b+1]==6 || pole[a+2][b-1]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																												{
																													pom=23;
                                                                                                                }
																											}
																											else
																											{
																												if(b==8)
																												{
																													if(pole[a+2][b-1]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																													{
																														pom=23;
																													}
																												}
																												else
																												{
																													if(a>2 && a<7)
																													{
																														if(b>2 && b<7)
																														{
																															if(pole[a+2][b+1]==6 || pole[a-2][b+1]==6 || pole[a+1][b+2]==6 || pole[a-1][b+2]==6 || pole[a+2][b-1]==6 || pole[a-2][b-1]==6 || pole[a-1][b-2]==6 || pole[a+1][b-2]==6)
																															{
																																pom=23;
																															}
																														}
																													}
																												}
																											}
                                                                                                        }
                                                                                                    }
                                                                                                }
																							}
																						}
                                                                                    }
																				}
                                                                            }
                                                                        }
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if(pole[a][b]==9)
				{
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
				}
			if(pole[a][b]==10)
				{
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
				}
					if(pole[a][b]==11)
				{
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==6)
						{
							pom=23;
						}
					}
				}
			}
		}
	}
	return (pom);                                    //konec sachu
}
int sachb(int pole[9][9])
{
	int a;
	int b;
	int c;
	int d;
	int z=0;
	int pom=0;
	for(b=1;b!=9;b++)
	{
		for(a=1;a!=9;a++)
		{
			z=0;
			if(pole[a][b]>=1 && pole[a][b]<=6)
			{
            	if(pole[a][b]==1)
				{
					if(a==1)
					{
						if(pole[(a+1)][(b+1)]==12)
						{
							pom=23;
						}
					}
					else
					{
						if(a==8)
						{
							if(pole[(a-1)][(b+1)]==12)
							{
								pom=23;
							}
						}
						else
						{
							if(pole[(a+1)][(b+1)]==12)
							{
								pom=23;
							}
							else
							{
								if(pole[(a-1)][(b+1)]==12)
								{
									pom=23;
								}
							}
						}
					}
				}
				if(pole[a][b]==2)
				{
																 //2. kvadrant
					if(a==1 && b==1)
					{
						if(pole[a+2][b+1]==12 || pole[a+1][b+2]==12)
						{
							pom=23;
						}
					}
					else
					{
						if(a==2 && b==1)
						{
							if(pole[a+2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12)
							{
								pom=23;
							}
						}
						else
						{
							if(a==2 && b==2)
							{
								if(pole[a+2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a+2][b-1]==12)
								{
									pom=23;
								}
							}
							else
							{
								if(a==1 && b==2)
								{
									if(pole[a+2][b+1]==12 || pole[a+1][b+2]==12 || pole[a+2][b-1]==12)
									{
										pom=23;
									}
								}
								else
								{
																		 //4. kvadrant
									if(a==8 && b==8)
									{
										if(pole[a-2][b-1]==12 || pole[a-1][b-2]==12)
										{
											pom=23;
										}
									}
									else
									{
										if(a==7 && b==8)
										{
											if(pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
											{
												pom=23;
											}
										}
										else
										{
											if(a==7 && b==7)
											{
												if(pole[a-2][b+1]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
												{
													pom=23;
												}
											}
											else
											{
												if(a==8 && b==7)
												{
													if(pole[a-2][b+1]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12)
													{
														pom=23;
													}
												}
												else
												{
																			//1.kvadrant
													if(a==1 && b==8)
													{
														if(pole[a+2][b-1]==12 ||	pole[a+1][b-2]==12)
														{
															pom=23;
														}
													}
													else
													{
														if(a==1 && b==7)
														{
															if(pole[a+2][b+1]==12 || pole[a+2][b-1]==12 || pole[a+1][b-2]==12)
															{
																pom=23;
															}
														}
														else
														{
															if(a==2 && b==8)
															{
																if(pole[a+2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																{
																	pom=23;
																}
															}
															else
															{
																if(a==2 && b==7)
																{
																	if(pole[a+2][b+1]==12 || pole[a+2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																	{
																		pom=23;
																	}
																}
																else
																{
																								//3. kvadrant
																	if(a==8 && b==1)
																	{
																		if(pole[a-2][b+1]==12 || pole[a-1][b+2]==12)
																		{
																			pom=23;
																		}
																	}
																	else
																	{
																		if(a==8 && b==2)
																		{
																			if(pole[a-2][b+1]==12 || pole[a-1][b+2]==12 || pole[a-2][b-1]==12)
																			{
																				pom=23;
                                                                            }
																		}
																		else
																		{
																			if(a==7 && b==1)
																			{
																				if(pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12)
																				{
																					pom=23;
                                                                                }
																			}
																			else
																			{
																				if(a==7 && b==2)
																				{
																					if(pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a-2][b-1]==12)
																					{
																						pom=23;
                                                                                    }
																				}
																				else
																				{
																					if(a==1)
																					{
																						if(pole[a+2][b+1]==12 ||  pole[a+1][b+2]==12 || pole[a+2][b-1]==12 || pole[a+1][b-2]==12)
																						{
																							pom=23;
																						}
																					}
																					else
																					{
																						if(a==2)
																						{
																							if(pole[a+2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a+2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																							{
																								pom=23;
																							}
																						}
																						else
																						{
																							if(a==7)
																							{
																								if(pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																								{
																									pom=23;
                                                                                                }
																							}
																							else
																							{
																								if(a==8)
																								{
																									if(pole[a-2][b+1]==12 || pole[a-1][b+2]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12)
																									{
																										pom=23;
																									}
																								}
																								else
																								{
																									if(b==1)
																									{
																										if(pole[a+2][b+1]==12 || pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12)
																										{
																											pom=23;
																										}
																									}
																									else
																									{
																										if(b==2)
																										{
																											if(pole[a+2][b+1]==12 || pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a+2][b-1]==12 || pole[a-2][b-1]==12)
																											{
																												pom=23;
																											}
																										}
																										else
																										{
																											if(b==7)
																											{
																												if(pole[a+2][b+1]==12 || pole[a-2][b+1]==12 || pole[a+2][b-1]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																												{
																													pom=23;
                                                                                                                }
																											}
																											else
																											{
																												if(b==8)
																												{
																													if(pole[a+2][b-1]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																													{
																														pom=23;
																													}
																												}
																												else
																												{
																													if(a>2 && a<7)
																													{
																														if(b>2 && b<7)
																														{
																															if(pole[a+2][b+1]==12 || pole[a-2][b+1]==12 || pole[a+1][b+2]==12 || pole[a-1][b+2]==12 || pole[a+2][b-1]==12 || pole[a-2][b-1]==12 || pole[a-1][b-2]==12 || pole[a+1][b-2]==12)
																															{
																																pom=23;
																															}
																														}
																													}
																												}
																											}
                                                                                                        }
                                                                                                    }
                                                                                                }
																							}
																						}
                                                                                    }
																				}
                                                                            }
                                                                        }
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if(pole[a][b]==3)
				{
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
				}
				if(pole[a][b]==4)
				{
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
				}
				if(pole[a][b]==5)
				{
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
						pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
						pom=23;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==12)
						{
							pom=23;
						}
					}
				}
			}
		}
	}
	return (pom);                                       //konec sachu
}
int obranasachub(int pole[9][9])
{
	int a;
	int b;
	int c;
	int d;
	int help;
	int z=0;
	int pom=0;
	int poleb[9][9];
	for(b=1;b!=9;b++)
	{
		for(a=1;a!=9;a++)
		{
		  poleb[a][b]=pole[a][b];
		}
	}
	for(b=1;b!=9;b++)
	{
		for(a=1;a!=9;a++)
		{
			for(d=1;d!=9;d++)
			{
				for(c=1;c!=9;c++)
				{
					pole[c][d]=poleb[c][d];
				}
			}
			z=0;
			if(pole[a][b]>=1 && pole[a][b]<=6)
			{
				if(pole[a][b]==1)
				{
					if(pole[(a+1)][(b+1)]==7 || pole[(a+1)][(b+1)]==8 || pole[(a+1)][(b+1)]==9 || pole[(a+1)][(b+1)]==10 || pole[(a+1)][(b+1)]==11)
					{
					  if(a!=8)
					  {
						help=pole[a+1][b+1];
						pole[a+1][b+1]=pole[a][b];
						pole[a][b]=13;
						if(23!=vlastnisachb(pole))
						{
							pom=23;
						}
						pole[a][b]=pole[a+1][b+1];
						pole[a+1][b+1]=help;
					  }
					}

						if(pole[(a-1)][(b+1)]==7 || pole[a-1][b+1]==8 || pole[(a-1)][(b+1)]==9 || pole[(a-1)][(b+1)]==10 || pole[(a-1)][(b+1)]==11)
						{
						  if(a!=1)
						  {
							help=pole[a-1][b+1];
							pole[a-1][b+1]=pole[a][b];
							pole[a][b]=13;
							if(23!=vlastnisachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[a-1][b+1];
							pole[a-1][b+1]=help;
						  }
						}

					if(pole[a][b+1]>=13)
					{
						help=pole[a][b+1];
						pole[a][b+1]=pole[a][b];
						pole[a][b]=13;
						if(23!=vlastnisachb(pole))
						{
							pom=23;
						}
						pole[a][b]=pole[a][b+1];
						pole[a][b+1]=help;
						if(b==2)
						{
							if(pole[a][b+2]>=13)
							{
								help=pole[a][b+2];
								pole[a][b+2]=pole[a][b];
								pole[a][b]=13;
								if(23!=vlastnisachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a][b+2];
								pole[a][b+2]=help;
							}
						}
					}
				}
				if(pole[a][b]==2)
				{
																 //2. kvadrant
					if(a==1 && b==1)
					{
						if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
						{
							help=pole[a+2][b+1];
							pole[a+2][b+1]=pole[a][b];
							pole[a][b]=13;
							if(23!=vlastnisachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[a+2][b+1];
							pole[a+2][b+1]=help;
						}
							if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
							{
								help=pole[a+1][b+2];
								pole[a+1][b+2]=pole[a][b];
								pole[a][b]=13;
								if(23!=vlastnisachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a+1][b+2];
								pole[a+1][b+2]=help;
							}
					}
					else
					{
						if(a==2 && b==1)
						{
							if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
							{
								help=pole[a+2][b+1];
								pole[a+2][b+1]=pole[a][b];
								pole[a][b]=13;
								if(23!=vlastnisachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a+2][b+1];
								pole[a+2][b+1]=help;
							}
							if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
							{
								help=pole[a+1][b+2];
								pole[a+1][b+2]=pole[a][b];
								pole[a][b]=13;
								if(23!=vlastnisachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a+1][b+2];
								pole[a+1][b+2]=help;
							}
							if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
							{
								help=pole[a-1][b+2];
								pole[a-1][b+2]=pole[a][b];
								pole[a][b]=13;
								if(23!=vlastnisachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a-1][b+2];
								pole[a-1][b+2]=help;
                            }
						}
						else
						{
							if(a==2 && b==2)
							{
								if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
								{
									help=pole[a+2][b+1];
									pole[a+2][b+1]=pole[a][b];
									pole[a][b]=13;
									if(23!=vlastnisachb(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a+2][b+1];
									pole[a+2][b+1]=help;
								}
								if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
								{
									help=pole[a+1][b+2];
									pole[a+1][b+2]=pole[a][b];
									pole[a][b]=13;
									if(23!=vlastnisachb(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a+1][b+2];
									pole[a+1][b+2]=help;
								}
								if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
								{
									help=pole[a-1][b+2];
									pole[a-1][b+2]=pole[a][b];
									pole[a][b]=13;
									if(23!=vlastnisachb(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a-1][b+2];
									pole[a-1][b+2]=help;
								}
								if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
								{
									help=pole[a+2][b-1];
									pole[a+2][b-1]=pole[a][b];
									pole[a][b]=13;
									if(23!=vlastnisachb(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a+2][b-1];
									pole[a+2][b-1]=help;
								}
							}
							else
							{
								if(a==1 && b==2)
								{
									if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
									{
										help=pole[a+2][b+1];
										pole[a+2][b+1]=pole[a][b];
										pole[a][b]=13;
										if(23!=vlastnisachb(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a+2][b+1];
										pole[a+2][b+1]=help;
									}
									if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
									{
										help=pole[a+1][b+2];
										pole[a+1][b+2]=pole[a][b];
										pole[a][b]=13;
										if(23!=vlastnisachb(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a+1][b+2];
										pole[a+1][b+2]=help;
									}
									if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
									{
										help=pole[a+2][b-1];
										pole[a+2][b-1]=pole[a][b];
										pole[a][b]=13;
										if(23!=vlastnisachb(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a+2][b-1];
										pole[a+2][b-1]=help;
									}
								}
								else
								{
																		 //4. kvadrant
									if(a==8 && b==8)
									{
										if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
										{
											help=pole[a-2][b-1];
											pole[a-2][b-1]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachb(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a-2][b-1];
											pole[a-2][b-1]=help;
										}
										if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
										{
											help=pole[a-1][b-2];
											pole[a-1][b-2]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachb(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a-1][b-2];
											pole[a-1][b-2]=help;
                                        }
									}
									else
									{
										if(a==7 && b==8)
										{
											if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
											{
												help=pole[a-2][b-1];
												pole[a-2][b-1]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachb(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a-2][b-1];
												pole[a-2][b-1]=help;
											}
											if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
											{
												help=pole[a-1][b-2];
												pole[a-1][b-2]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachb(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a-1][b-2];
												pole[a-1][b-2]=help;
											}
											if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
											{
												help=pole[a+1][b-2];
												pole[a+1][b-2]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachb(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a+1][b-2];
												pole[a+1][b-2]=help;
											}
										}
										else
										{
											if(a==7 && b==7)
											{
												if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
												{
													help=pole[a-2][b+1];
													pole[a-2][b+1]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a-2][b+1];
													pole[a-2][b+1]=help;
												}
												if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
												{
													help=pole[a-2][b-1];
													pole[a-2][b-1]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a-2][b-1];
													pole[a-2][b-1]=help;
												}
												if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
												{
													help=pole[a-1][b-2];
													pole[a-1][b-2]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a-1][b-2];
													pole[a-1][b-2]=help;
												}
												if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
												{
													help=pole[a+1][b-2];
													pole[a+1][b-2]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a+1][b-2];
													pole[a+1][b-2]=help;
												}
											}
											else
											{
												if(a==8 && b==7)
												{
													if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
													{
														help=pole[a-2][b+1];
														pole[a-2][b+1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-2][b+1];
														pole[a-2][b+1]=help;
													}
													if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
													{
														help=pole[a-2][b-1];
														pole[a-2][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-2][b-1];
														pole[a-2][b-1]=help;
													}
													if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
													{
														help=pole[a-1][b-2];
														pole[a-1][b-2]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b-2];
														pole[a-1][b-2]=help;
                                                    }
												}
												else
												{
																			//1.kvadrant
													if(a==1 && b==8)
													{
														if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
														{
															help=pole[a+2][b-1];
															pole[a+2][b-1]=pole[a][b];
															pole[a][b]=13;
															if(23!=vlastnisachb(pole))
															{
																pom=23;
															}
															pole[a][b]=pole[a+2][b-1];
															pole[a+2][b-1]=help;
														}
														if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
														{
															help=pole[a+1][b-2];
															pole[a+1][b-2]=pole[a][b];
															pole[a][b]=13;
															if(23!=vlastnisachb(pole))
															{
																pom=23;
															}
															pole[a][b]=pole[a+1][b-2];
															pole[a+1][b-2]=help;
                                                        }
													}
													else
													{
														if(a==1 && b==7)
														{
															if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
															{
																help=pole[a+2][b+1];
																pole[a+2][b+1]=pole[a][b];
																pole[a][b]=13;
																if(23!=vlastnisachb(pole))
																{
																	pom=23;
																}
																pole[a][b]=pole[a+2][b+1];
																pole[a+2][b+1]=help;
															}
															if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
															{
																help=pole[a+2][b-1];
																pole[a+2][b-1]=pole[a][b];
																pole[a][b]=13;
																if(23!=vlastnisachb(pole))
																{
																	pom=23;
																}
																pole[a][b]=pole[a+2][b-1];
																pole[a+2][b-1]=help;
															}
															if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
															{
																help=pole[a+1][b-2];
																pole[a+1][b-2]=pole[a][b];
																pole[a][b]=13;
																if(23!=vlastnisachb(pole))
																{
																	pom=23;
																}
																pole[a][b]=pole[a+1][b-2];
																pole[a+1][b-2]=help;
															}
														}
														else
														{
															if(a==2 && b==8)
															{
																if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
																{
																	help=pole[a+2][b-1];
																	pole[a+2][b-1]=pole[a][b];
																	pole[a][b]=13;
																	if(23!=vlastnisachb(pole))
																	{
																		pom=23;
																	}
																	pole[a][b]=pole[a+2][b-1];
																	pole[a+2][b-1]=help;
																}
																if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
																{
																	help=pole[a-1][b-2];
																	pole[a-1][b-2]=pole[a][b];
																	pole[a][b]=13;
																	if(23!=vlastnisachb(pole))
																	{
																		pom=23;
																	}
																	pole[a][b]=pole[a-1][b-2];
																	pole[a-1][b-2]=help;
                                                                }
																if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
																{
																	help=pole[a+1][b-2];
																	pole[a+1][b-2]=pole[a][b];
																	pole[a][b]=13;
																	if(23!=vlastnisachb(pole))
																	{
																		pom=23;
																	}
																	pole[a][b]=pole[a+1][b-2];
																	pole[a+1][b-2]=help;
                                                                }
															}
															else
															{
																if(a==2 && b==7)
																{
																	if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
																	{
																		help=pole[a+2][b+1];
																		pole[a+2][b+1]=pole[a][b];
																		pole[a][b]=13;
																		if(23!=vlastnisachb(pole))
																		{
																			pom=23;
																		}
																		pole[a][b]=pole[a+2][b+1];
																		pole[a+2][b+1]=help;
																	}
																	if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
																	{
																		help=pole[a+2][b-1];
																		pole[a+2][b-1]=pole[a][b];
																		pole[a][b]=13;
																		if(23!=vlastnisachb(pole))
																		{
																			pom=23;
																		}
																		pole[a][b]=pole[a+2][b-1];
																		pole[a+2][b-1]=help;
                                                                    }
																	if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
																	{
																		help=pole[a-1][b-2];
																		pole[a-1][b-2]=pole[a][b];
																		pole[a][b]=13;
																		if(23!=vlastnisachb(pole))
																		{
																			pom=23;
																		}
																		pole[a][b]=pole[a-1][b-2];
																		pole[a-1][b-2]=help;
																	}
																	if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
																	{
																		help=pole[a+1][b-2];
																		pole[a+1][b-2]=pole[a][b];
																		pole[a][b]=13;
																		if(23!=vlastnisachb(pole))
																		{
																			pom=23;
																		}
																		pole[a][b]=pole[a+1][b-2];
																		pole[a+1][b-2]=help;
                                                                    }
																}
																else
																{
																								//3. kvadrant
																	if(a==8 && b==1)
																	{
																		if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
																		{
																			help=pole[a-2][b+1];
																			pole[a-2][b+1]=pole[a][b];
																			pole[a][b]=13;
																			if(23!=vlastnisachb(pole))
																			{
																				pom=23;
																			}
																			pole[a][b]=pole[a-2][b+1];
																			pole[a-2][b+1]=help;
																		}
																		if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
																		{
																			help=pole[a-1][b+2];
																			pole[a-1][b+2]=pole[a][b];
																			pole[a][b]=13;
																			if(23!=vlastnisachb(pole))
																			{
																				pom=23;
																			}
																			pole[a][b]=pole[a-1][b+2];
																			pole[a-1][b+2]=help;
                                                                        }
																	}
																	else
																	{
																		if(a==8 && b==2)
																		{
																			if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
																			{
																				help=pole[a-2][b+1];
																				pole[a-2][b+1]=pole[a][b];
																				pole[a][b]=13;
																				if(23!=vlastnisachb(pole))
																				{
																					pom=23;
																				}
																				pole[a][b]=pole[a-2][b+1];
																				pole[a-2][b+1]=help;
																			}
																			if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
																			{
																				help=pole[a-1][b+2];
																				pole[a-1][b+2]=pole[a][b];
																				pole[a][b]=13;
																				if(23!=vlastnisachb(pole))
																				{
																					pom=23;
																				}
																				pole[a][b]=pole[a-1][b+2];
																				pole[a-1][b+2]=help;
                                                                            }
																			if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
																			{
																				help=pole[a-2][b-1];
																				pole[a-2][b-1]=pole[a][b];
																				pole[a][b]=13;
																				if(23!=vlastnisachb(pole))
																				{
																					pom=23;
																				}
																				pole[a][b]=pole[a-2][b-1];
																				pole[a-2][b-1]=help;
                                                                            }
																		}
																		else
																		{
																			if(a==7 && b==1)
																			{
																				if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
																				{
																					help=pole[a-2][b+1];
																					pole[a-2][b+1]=pole[a][b];
																					pole[a][b]=13;
																					if(23!=vlastnisachb(pole))
																					{
																						pom=23;
																					}
																					pole[a][b]=pole[a-2][b+1];
																					pole[a-2][b+1]=help;
																				}
																				if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
																				{
																					help=pole[a+1][b+2];
																					pole[a+1][b+2]=pole[a][b];
																					pole[a][b]=13;
																					if(23!=vlastnisachb(pole))
																					{
																						pom=23;
																					}
																					pole[a][b]=pole[a+1][b+2];
																					pole[a+1][b+2]=help;
                                                                                }
																				if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
																				{
																					help=pole[a-1][b+2];
																					pole[a-1][b+2]=pole[a][b];
																					pole[a][b]=13;
																					if(23!=vlastnisachb(pole))
																					{
																						pom=23;
																					}
																					pole[a][b]=pole[a-1][b+2];
																					pole[a-1][b+2]=help;
																				}
																			}
																			else
																			{
																				if(a==7 && b==2)
																				{
																					if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
																					{
																						help=pole[a-2][b+1];
																						pole[a-2][b+1]=pole[a][b];
																						pole[a][b]=13;
																						if(23!=vlastnisachb(pole))
																						{
																							pom=23;
																						}
																						pole[a][b]=pole[a-2][b+1];
																						pole[a-2][b+1]=help;
																					}
																					if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
																					{
																						help=pole[a+1][b+2];
																						pole[a+1][b+2]=pole[a][b];
																						pole[a][b]=13;
																						if(23!=vlastnisachb(pole))
																						{
																							pom=23;
																						}
																						pole[a][b]=pole[a+1][b+2];
																						pole[a+1][b+2]=help;
																					}
																					if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
																					{
																						help=pole[a-1][b+2];
																						pole[a-1][b+2]=pole[a][b];
																						pole[a][b]=13;
																						if(23!=vlastnisachb(pole))
																						{
																							pom=23;
																						}
																						pole[a][b]=pole[a-1][b+2];
																						pole[a-1][b+2]=help;
																					}
																					if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
																					{
																						help=pole[a-2][b-1];
																						pole[a-2][b-1]=pole[a][b];
																						pole[a][b]=13;
																						if(23!=vlastnisachb(pole))
																						{
																							pom=23;
																						}
																						pole[a][b]=pole[a-2][b-1];
																						pole[a-2][b-1]=help;
                                                                                    }
																				}
																				else
																				{
																					if(a==1)
																					{
																						if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
																						{
																							help=pole[a+2][b+1];
																							pole[a+2][b+1]=pole[a][b];
																							pole[a][b]=13;
																							if(23!=vlastnisachb(pole))
																							{
																								pom=23;
																							}
																							pole[a][b]=pole[a+2][b+1];
																							pole[a+2][b+1]=help;
																						}
																						if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
																						{
																							help=pole[a+1][b+2];
																							pole[a+1][b+2]=pole[a][b];
																							pole[a][b]=13;
																							if(23!=vlastnisachb(pole))
																							{
																								pom=23;
																							}
																							pole[a][b]=pole[a+1][b+2];
																							pole[a+1][b+2]=help;
																						}
																						if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
																						{
																							help=pole[a+2][b-1];
																							pole[a+2][b-1]=pole[a][b];
																							pole[a][b]=13;
																							if(23!=vlastnisachb(pole))
																							{
																								pom=23;
																							}
																							pole[a][b]=pole[a+2][b-1];
																							pole[a+2][b-1]=help;
																						}
																						if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
																						{
																							help=pole[a+1][b-2];
																							pole[a+1][b-2]=pole[a][b];
																							pole[a][b]=13;
																							if(23!=vlastnisachb(pole))
																							{
																								pom=23;
																							}
																							pole[a][b]=pole[a+1][b-2];
																							pole[a+1][b-2]=help;
																						}
																					}
																					else
																					{
																						if(a==2)
																						{
																							if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
																							{
																								help=pole[a+2][b+1];
																								pole[a+2][b+1]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=vlastnisachb(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a+2][b+1];
																								pole[a+2][b+1]=help;
																							}
																							if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
																							{
																								help=pole[a+1][b+2];
																								pole[a+1][b+2]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=vlastnisachb(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a+1][b+2];
																								pole[a+1][b+2]=help;
                                                                                            }
																							if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
																							{
																								help=pole[a-1][b+2];
																								pole[a-1][b+2]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=vlastnisachb(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a-1][b+2];
																								pole[a-1][b+2]=help;
																							}
																							if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
																							{
																								help=pole[a+2][b-1];
																								pole[a+2][b-1]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=vlastnisachb(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a+2][b-1];
																								pole[a+2][b-1]=help;
                                                                                            }
																							if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
																							{
																								help=pole[a-1][b-2];
																								pole[a-1][b-2]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=vlastnisachb(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a-1][b-2];
																								pole[a-1][b-2]=help;
                                                                                            }
																							if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
																							{
																								help=pole[a+1][b-2];
																								pole[a+1][b-2]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=sachc(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a+1][b-2];
																								pole[a+1][b-2]=help;
                                                                                            }
																						}
																						else
																						{
																							if(a==7)
																							{
																								if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
																								{
																									help=pole[a-2][b+1];
																									pole[a-2][b+1]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachc(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a-2][b+1];
																									pole[a-2][b+1]=help;
																								}
																								if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
																								{
																									help=pole[a+1][b+2];
																									pole[a+1][b+2]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachc(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a+1][b+2];
																									pole[a+1][b+2]=help;
																								}
																								if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
																								{
																									help=pole[a-1][b+2];
																									pole[a-1][b+2]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachc(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a-1][b+2];
																									pole[a-1][b+2]=help;
																								}
																								if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
																								{
																									help=pole[a-2][b-1];
																									pole[a-2][b-1]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachc(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a-2][b-1];
																									pole[a-2][b-1]=help;
                                                                                                }
																								if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
																								{
																									help=pole[a-1][b-2];
																									pole[a-1][b-2]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachc(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a-1][b-2];
																									pole[a-1][b-2]=help;
                                                                                                }
																								if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
																								{
																									help=pole[a+1][b-2];
																									pole[a+1][b-2]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachc(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a+1][b-2];
																									pole[a+1][b-2]=help;
																								}
																							}
																							else
																							{
																								if(a==8)
																								{
																									if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
																									{
																										help=pole[a-2][b+1];
																										pole[a-2][b+1]=pole[a][b];
																										pole[a][b]=13;
																										if(23!=sachc(pole))
																										{
																											pom=23;
																										}
																										pole[a][b]=pole[a-2][b+1];
																										pole[a-2][b+1]=help;
																									}
																									if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
																									{
																										help=pole[a-1][b+2];
																										pole[a-1][b+2]=pole[a][b];
																										pole[a][b]=13;
																										if(23!=sachc(pole))
																										{
																											pom=23;
																										}
																										pole[a][b]=pole[a-1][b+2];
																										pole[a-1][b+2]=help;
																									}
																									if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
																									{
																										help=pole[a-2][b-1];
																										pole[a-2][b-1]=pole[a][b];
																										pole[a][b]=13;
																										if(23!=sachc(pole))
																										{
																											pom=23;
																										}
																										pole[a][b]=pole[a-2][b-1];
																										pole[a-2][b-1]=help;
                                                                                                    }
																									if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
																									{
																										help=pole[a-1][b-2];
																										pole[a-1][b-2]=pole[a][b];
																										pole[a][b]=13;
																										if(23!=sachc(pole))
																										{
																											pom=23;
																										}
																										pole[a][b]=pole[a-1][b-2];
																										pole[a-1][b-2]=help;
                                                                                                    }
																								}
																								else
																								{
																									if(b==1)
																									{
																										if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
																										{
																											help=pole[a+2][b+1];
																											pole[a+2][b+1]=pole[a][b];
																											pole[a][b]=13;
																											if(23!=sachc(pole))
																											{
																												pom=23;
																											}
																											pole[a][b]=pole[a+2][b+1];
																											pole[a+2][b+1]=help;
																										}
																										if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
																										{
																											help=pole[a-2][b+1];
																											pole[a-2][b+1]=pole[a][b];
																											pole[a][b]=13;
																											if(23!=sachc(pole))
																											{
																												pom=23;
																											}
																											pole[a][b]=pole[a-2][b+1];
																											pole[a-2][b+1]=help;
																										}
																										if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
																										{
																											help=pole[a+1][b+2];
																											pole[a+1][b+2]=pole[a][b];
																											pole[a][b]=13;
																											if(23!=sachc(pole))
																											{
																												pom=23;
																											}
																											pole[a][b]=pole[a+1][b+2];
																											pole[a+1][b+2]=help;
                                                                                                        }
																										if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
																										{
																											help=pole[a-1][b+2];
																											pole[a-1][b+2]=pole[a][b];
																											pole[a][b]=13;
																											if(23!=sachc(pole))
																											{
																												pom=23;
																											}
																											pole[a][b]=pole[a-1][b+2];
																											pole[a-1][b+2]=help;
                                                                                                        }
																									}
																									else
																									{
																										if(b==2)
																										{
																											if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
																											{
																												help=pole[a+2][b+1];
																												pole[a+2][b+1]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachc(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a+2][b+1];
																												pole[a+2][b+1]=help;
																											}
																											if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
																											{
																												help=pole[a-2][b+1];
																												pole[a-2][b+1]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachc(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a-2][b+1];
																												pole[a-2][b+1]=help;
                                                                                                            }
																											if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
																											{
																												help=pole[a+1][b+2];
																												pole[a+1][b+2]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachc(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a+1][b+2];
																												pole[a+1][b+2]=help;
                                                                                                            }
																											if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
																											{
																												help=pole[a-1][b+2];
																												pole[a-1][b+2]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachc(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a-1][b+2];
																												pole[a-1][b+2]=help;
                                                                                                            }
																											if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
																											{
																												help=pole[a+2][b-1];
																												pole[a+2][b-1]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachc(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a+2][b-1];
																												pole[a+2][b-1]=help;
                                                                                                            }
																											if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
																											{
																												help=pole[a-2][b-1];
																												pole[a-2][b-1]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachc(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a-2][b-1];
																												pole[a-2][b-1]=help;
																											}
																										}
																										else
																										{
																											if(b==7)
																											{
																												if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
																												{
																													help=pole[a+2][b+1];
																													pole[a+2][b+1]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachc(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a+2][b+1];
																													pole[a+2][b+1]=help;
																												}
																												if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
																												{
																													help=pole[a-2][b+1];
																													pole[a-2][b+1]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachc(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a-2][b+1];
																													pole[a-2][b+1]=help;
																												}
																												if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
																												{
																													help=pole[a+2][b-1];
																													pole[a+2][b-1]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachc(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a+2][b-1];
																													pole[a+2][b-1]=help;
																												}
																												if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
																												{
																													help=pole[a-2][b-1];
																													pole[a-2][b-1]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachc(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a-2][b-1];
																													pole[a-2][b-1]=help;
																												}
																												if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
																												{
																													help=pole[a-1][b-2];
																													pole[a-1][b-2]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachc(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a-1][b-2];
																													pole[a-1][b-2]=help;
																												}
																												if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
																												{
																													help=pole[a+1][b-2];
																													pole[a+1][b-2]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachc(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a+1][b-2];
																													pole[a+1][b-2]=help;
																												}
																											}
																											else
																											{
																												if(b==8)
																												{
																													if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
																													{
																														help=pole[a+2][b-1];
																														pole[a+2][b-1]=pole[a][b];
																														pole[a][b]=13;
																														if(23!=sachc(pole))
																														{
																															pom=23;
																														}
																														pole[a][b]=pole[a+2][b-1];
																														pole[a+2][b-1]=help;
																													}
																													if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
																													{
																														help=pole[a-2][b-1];
																														pole[a-2][b-1]=pole[a][b];
																														pole[a][b]=13;
																														if(23!=sachc(pole))
																														{
																															pom=23;
																														}
																														pole[a][b]=pole[a-2][b-1];
																														pole[a-2][b-1]=help;
																													}
																													if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
																													{
																														help=pole[a-1][b-2];
																														pole[a-1][b-2]=pole[a][b];
																														pole[a][b]=13;
																														if(23!=sachc(pole))
																														{
																															pom=23;
																														}
																														pole[a][b]=pole[a-1][b-2];
																														pole[a-1][b-2]=help;
																													}
																													if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
																													{
																														help=pole[a+1][b-2];
																														pole[a+1][b-2]=pole[a][b];
																														pole[a][b]=13;
																														if(23!=sachc(pole))
																														{
																															pom=23;
																														}
																														pole[a][b]=pole[a+1][b-2];
																														pole[a+1][b-2]=help;
                                                                                                                    }
																												}
																												else
																												{
																													if(a>2 && a<7)
																													{
																														if(b>2 && b<7)
																														{
																															if(pole[a+2][b+1]>=7 && pole[a+2][b+1]!=12)
																															{
																																help=pole[a+2][b+1];
																																pole[a+2][b+1]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachc(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a+2][b+1];
																																pole[a+2][b+1]=help;
																															}
																															if(pole[a-2][b+1]>=7 && pole[a-2][b+1]!=12)
																															{
																																help=pole[a-2][b+1];
																																pole[a-2][b+1]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachc(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a-2][b+1];
																																pole[a-2][b+1]=help;
																															}
																															if(pole[a+1][b+2]>=7 && pole[a+1][b+2]!=12)
																															{
																																help=pole[a+1][b+2];
																																pole[a+1][b+2]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachc(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a+1][b+2];
																																pole[a+1][b+2]=help;
																															}
																															if(pole[a-1][b+2]>=7 && pole[a-1][b+2]!=12)
																															{
																																help=pole[a-1][b+2];
																																pole[a-1][b+2]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachc(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a-1][b+2];
																																pole[a-1][b+2]=help;
																															}
																															if(pole[a+2][b-1]>=7 && pole[a+2][b-1]!=12)
																															{
																																help=pole[a+2][b-1];
																																pole[a+2][b-1]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachc(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a+2][b-1];
																																pole[a+2][b-1]=help;
																															}
																															if(pole[a-2][b-1]>=7 && pole[a-2][b-1]!=12)
																															{
																																help=pole[a-2][b-1];
																																pole[a-2][b-1]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachc(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a-2][b-1];
																																pole[a-2][b-1]=help;
																															}
																															if(pole[a-1][b-2]>=7 && pole[a-1][b-2]!=12)
																															{
																																help=pole[a-1][b-2];
																																pole[a-1][b-2]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachc(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a-1][b-2];
																																pole[a-1][b-2]=help;
																															}
																															if(pole[a+1][b-2]>=7 && pole[a+1][b-2]!=12)
																															{
																																help=pole[a+1][b-2];
																																pole[a+1][b-2]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachc(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a+1][b-2];
																																pole[a+1][b-2]=help;
																															}
																														}
																													}
																												}
																											}
                                                                                                        }
																									}
                                                                                                }
																							}
                                                                                        }
                                                                                    }
																				}
																			}
                                                                        }
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if(pole[a][b]==3)
				{
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
				}
			if(pole[a][b]==4)
				{
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
				}
				if(pole[a][b]==5)
				{
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]>=7 && pole[c][d]!=12)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
				}
				if(pole[a][b]==6)
				{
					if(a==1 && b==1)
					{
						if(pole[a+1][b+1]>=7 && pole[a+1][b+1]!=12)
						{
							help=pole[a+1][b+1];
							pole[a+1][b+1]=pole[a][b];
							pole[a][b]=13;
							if(23!=vlastnisachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[a+1][b+1];
							pole[a+1][b+1]=help;
						}
						if(pole[a+1][b]>=7 && pole[a+1][b]!=12)
						{
							help=pole[a+1][b];
							pole[a+1][b]=pole[a][b];
							pole[a][b]=13;
							if(23!=vlastnisachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[a+1][b];
							pole[a+1][b]=help;
						}
						if(pole[a][b+1]>=7 && pole[a][b+1]!=12)
						{
							help=pole[a][b+1];
							pole[a][b+1]=pole[a][b];
							pole[a][b]=13;
							if(23!=vlastnisachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[a][b+1];
							pole[a][b+1]=help;
						}
					}
					else
					{
						if(a==1 && b==8)
						{
							if(pole[a+1][b]>=7 && pole[a+1][b]!=12)
							{
								help=pole[a+1][b];
								pole[a+1][b]=pole[a][b];
								pole[a][b]=13;
								if(23!=vlastnisachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a+1][b];
								pole[a+1][b]=help;
							}
							if(pole[a+1][b-1]>=7 && pole[a+1][b-1]!=12)
							{
								help=pole[a+1][b-1];
								pole[a+1][b-1]=pole[a][b];
								pole[a][b]=13;
								if(23!=vlastnisachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a+1][b-1];
								pole[a+1][b-1]=help;
                            }
							if(pole[a][b-1]>=7 && pole[a][b-1]!=12)
							{
								help=pole[a][b-1];
								pole[a][b-1]=pole[a][b];
								pole[a][b]=13;
								if(23!=vlastnisachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a][b-1];
								pole[a][b-1]=help;
                            }
						}
						else
						{
							if(a==8 && b==1)
							{
								if(pole[a][b+1]>=7 && pole[a][b+1]!=12)
								{
									help=pole[a][b+1];
									pole[a][b+1]=pole[a][b];
									pole[a][b]=13;
									if(23!=vlastnisachb(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a][b+1];
									pole[a][b+1]=help;
								}
								if(pole[a-1][b+1]>=7 && pole[a-1][b+1]!=12)
								{
									help=pole[a-1][b+1];
									pole[a-1][b+1]=pole[a][b];
									pole[a][b]=13;
									if(23!=vlastnisachb(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a-1][b+1];
									pole[a-1][b+1]=help;
                                }
								if(pole[a-1][b]>=7 && pole[a-1][b]!=12)
								{
									help=pole[a-1][b];
									pole[a-1][b]=pole[a][b];
									pole[a][b]=13;
									if(23!=vlastnisachb(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a-1][b];
									pole[a-1][b]=help;
								}
							}
							else
							{
								if(a==8 && b==8)
								{
									if(pole[a][b-1]>=7 && pole[a][b-1]!=12)
									{
										help=pole[a][b-1];
										pole[a][b-1]=pole[a][b];
										pole[a][b]=13;
										if(23!=vlastnisachb(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a][b-1];
										pole[a][b-1]=help;
									}
									if(pole[a-1][b]>=7 && pole[a-1][b]!=12)
									{
										help=pole[a-1][b];
										pole[a-1][b]=pole[a][b];
										pole[a][b]=13;
										if(23!=vlastnisachb(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a-1][b];
										pole[a-1][b]=help;
                                    }
									if(pole[a-1][b-1]>=7 && pole[a-1][b-1]!=12)
									{
										help=pole[a-1][b-1];
										pole[a-1][b-1]=pole[a][b];
										pole[a][b]=13;
										if(23!=vlastnisachb(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a-1][b-1];
										pole[a-1][b-1]=help;
                                    } 
								}
								else
								{
									if(a==1)
									{
										if(pole[a+1][b+1]>=7 && pole[a+1][b+1]!=12)
										{
											help=pole[a+1][b+1];
											pole[a+1][b+1]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachb(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a+1][b+1];
											pole[a+1][b+1]=help;
										}
										if(pole[a+1][b]>=7 && pole[a+1][b]!=12)
										{
											help=pole[a+1][b];
											pole[a+1][b]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachb(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a+1][b];
											pole[a+1][b]=help;
										}
										if(pole[a+1][b-1]>=7 && pole[a+1][b-1]!=12)
										{
											help=pole[a+1][b-1];
											pole[a+1][b-1]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachb(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a+1][b-1];
											pole[a+1][b-1]=help;
										}
										if(pole[a][b+1]>=7 && pole[a][b+1]!=12)
										{
											help=pole[a][b+1];
											pole[a][b+1]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachb(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a][b+1];
											pole[a][b+1]=help;
                                        }
										if(pole[a][b-1]>=7 && pole[a][b-1]!=12)
										{
											help=pole[a][b-1];
											pole[a][b-1]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachb(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a][b-1];
											pole[a][b-1]=help;
                                        }
									}
									else
									{
										if(a==8)
										{
											if(pole[a][b+1]>=7 && pole[a][b+1]!=12)
											{
												help=pole[a][b+1];
												pole[a][b+1]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachb(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a][b+1];
												pole[a][b+1]=help;
											}
											if(pole[a][b-1]>=7 && pole[a][b-1]!=12)
											{
												help=pole[a][b-1];
												pole[a][b-1]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachb(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a][b-1];
												pole[a][b-1]=help;
											}
											if(pole[a-1][b+1]>=7 && pole[a-1][b+1]!=12)
											{
												help=pole[a-1][b+1];
												pole[a-1][b+1]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachb(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a-1][b+1];
												pole[a-1][b+1]=help;
											}
											if(pole[a-1][b]>=7 && pole[a-1][b]!=12)
											{
												help=pole[a-1][b];
												pole[a-1][b]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachb(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a-1][b];
												pole[a-1][b]=help;
											}
											if(pole[a-1][b-1]>=7 && pole[a-1][b-1]!=12)
											{
												help=pole[a-1][b-1];
												pole[a-1][b-1]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachb(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a-1][b-1];
												pole[a-1][b-1]=help;
											}
										}
										else
										{
											if(b==1)
											{
												if(pole[a+1][b+1]>=7 && pole[a+1][b+1]!=12)
												{
													help=pole[a+1][b+1];
													pole[a+1][b+1]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a+1][b+1];
													pole[a+1][b+1]=help;
												}
												if(pole[a+1][b]>=7 && pole[a+1][b]!=12)
												{
													help=pole[a+1][b];
													pole[a+1][b]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a+1][b];
													pole[a+1][b]=help;
												}
												if(pole[a][b+1]>=7 && pole[a][b+1]!=12)
												{
													help=pole[a][b+1];
													pole[a][b+1]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a][b+1];
													pole[a][b+1]=help;
												}
												if(pole[a-1][b+1]>=7 && pole[a-1][b+1]!=12)
												{
													help=pole[a-1][b+1];
													pole[a-1][b+1]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a-1][b+1];
													pole[a-1][b+1]=help;
												}
												if(pole[a-1][b]>=7 && pole[a-1][b]!=12)
												{
													help=pole[a-1][b];
													pole[a-1][b]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a-1][b];
													pole[a-1][b]=help;
												}
											}
											else
											{
												if(b==8)
												{
													if(pole[a+1][b]>=7 && pole[a+1][b]!=12)
													{
														help=pole[a+1][b];
														pole[a+1][b]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a+1][b];
														pole[a+1][b]=help;
													}
													if(pole[a+1][b-1]>=7 && pole[a+1][b-1]!=12)
													{
														help=pole[a+1][b-1];
														pole[a+1][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a+1][b-1];
														pole[a+1][b-1]=help;
													}
													if(pole[a][b-1]>=7 && pole[a][b-1]!=12)
													{
														help=pole[a][b-1];
														pole[a][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a][b-1];
														pole[a][b-1]=help;
													}
													if(pole[a-1][b]>=7 && pole[a-1][b]!=12)
													{
														help=pole[a-1][b];
														pole[a-1][b]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b];
														pole[a-1][b]=help;
													}
													if(pole[a-1][b-1]>=7 && pole[a-1][b-1]!=12)
													{
														help=pole[a-1][b-1];
														pole[a-1][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b-1];
														pole[a-1][b-1]=help;
													}
												}
												else
												{
													if(pole[a+1][b+1]>=7 && pole[a+1][b+1]!=12)
													{
														help=pole[a+1][b+1];
														pole[a+1][b+1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a+1][b+1];
														pole[a+1][b+1]=help;
													}
													if(pole[a+1][b]>=7 && pole[a+1][b]!=12)
													{
														help=pole[a+1][b];
														pole[a+1][b]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a+1][b];
														pole[a+1][b]=help;
													}
													if(pole[a+1][b-1]>=7 && pole[a+1][b-1]!=12)
													{
														help=pole[a+1][b-1];
														pole[a+1][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a+1][b-1];
														pole[a+1][b-1]=help;
													}
													if(pole[a][b+1]>=7 && pole[a][b+1]!=12)
													{
														help=pole[a][b+1];
														pole[a][b+1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a][b+1];
														pole[a][b+1]=help;
													}
													if(pole[a][b-1]>=7 && pole[a][b-1]!=12)
													{
														help=pole[a][b-1];
														pole[a][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a][b-1];
														pole[a][b-1]=help;
													}
													if(pole[a-1][b+1]>=7 && pole[a-1][b+1]!=12)
													{
														help=pole[a-1][b+1];
														pole[a-1][b+1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b+1];
														pole[a-1][b+1]=help;
													}
													if(pole[a-1][b]>=7 && pole[a-1][b]!=12)
													{
														help=pole[a-1][b];
														pole[a-1][b]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b];
														pole[a-1][b]=help;
													}
													if(pole[a-1][b-1]>=7 && pole[a-1][b-1]!=12)
													{
														help=pole[a-1][b-1];
														pole[a-1][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b-1];
														pole[a-1][b-1]=help;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return pom;                         //konecobrany sachu
}
int obranasachuc(int pole[9][9])
{
	int a;
	int b;
	int c;
	int d;
	int help;
	int z=0;
	int pom=0;
	int poleb[9][9];
	for(b=1;b!=9;b++)
	{
		for(a=1;a!=9;a++)
		{
		  poleb[a][b]=pole[a][b];
		}
	}
	for(b=1;b!=9;b++)
	{
		for(a=1;a!=9;a++)
		{
			for(d=1;d!=9;d++)
			{
				for(c=1;c!=9;c++)
				{
					pole[c][d]=poleb[c][d];
				}
			}
			z=0;
			if(pole[a][b]>=7 && pole[a][b]<=12)
			{
				if(pole[a][b]==7)
				{
					if(pole[a+1][b-1]>=1 && pole[a+1][b-1]<=5)
					{
					  if(a!=8)
					  {
						help=pole[a+1][b-1];
						pole[a+1][b-1]=pole[a][b];
						pole[a][b]=13;
						if(23!=sachb(pole))
						{
							pom=23;
						}
						pole[a][b]=pole[a+1][b-1];
						pole[a+1][b-1]=help;
					  }
					}

						if(pole[a-1][b-1]>=1 && pole[a-1][b-1]<=5)
						{
						  if(a!=1)
						  {
							help=pole[a-1][b-1];
							pole[a-1][b-1]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[a-1][b-1];
							pole[a-1][b-1]=help;
						  }
						}

					if(pole[a][b-1]>=13)
					{
						help=pole[a][b-1];
						pole[a][b-1]=pole[a][b];
						pole[a][b]=13;
						if(23!=sachb(pole))
						{
							pom=23;
						}
						pole[a][b]=pole[a][b-1];
						pole[a][b-1]=help;
						if(b==7)
						{
							if(pole[a][b-2]>=13)
							{
								help=pole[a][b-2];
								pole[a][b-2]=pole[a][b];
								pole[a][b]=13;
								if(23!=sachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a][b-2];
								pole[a][b-2]=help;
							}
						}
					}
				}
				if(pole[a][b]==8)
				{
																 //2. kvadrant
					if(a==1 && b==1)
					{
						if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 ||pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
						{
							help=pole[a+2][b+1];
							pole[a+2][b+1]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[a+2][b+1];
							pole[a+2][b+1]=help;
						}
							if(pole[a+1][b+2]==1  || pole[a+1][b+2]==2 || pole[a+1][b+2]==3  || pole[a+1][b+2]==4  || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
							{
								help=pole[a+1][b+2];
								pole[a+1][b+2]=pole[a][b];
								pole[a][b]=13;
								if(23!=sachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a+1][b+2];
								pole[a+1][b+2]=help;
							}
					}
					else
					{
						if(a==2 && b==1)
						{
							if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 || pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
							{
								help=pole[a+2][b+1];
								pole[a+2][b+1]=pole[a][b];
								pole[a][b]=13;
								if(23!=sachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a+2][b+1];
								pole[a+2][b+1]=help;
							}
							if(pole[a+1][b+2]==1 || pole[a+1][b+2]==2 || pole[a+1][b+2]==3 || pole[a+1][b+2]==4 || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
                            {
								help=pole[a+1][b+2];
								pole[a+1][b+2]=pole[a][b];
								pole[a][b]=13;
								if(23!=sachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a+1][b+2];
								pole[a+1][b+2]=help;
							}
							if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
							{
								help=pole[a-1][b+2];
								pole[a-1][b+2]=pole[a][b];
								pole[a][b]=13;
								if(23!=sachb(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a-1][b+2];
								pole[a-1][b+2]=help;
                            }
						}
						else
						{
							if(a==2 && b==2)
							{
								if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 || pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
								{
									help=pole[a+2][b+1];
									pole[a+2][b+1]=pole[a][b];
									pole[a][b]=13;
									if(23!=sachb(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a+2][b+1];
									pole[a+2][b+1]=help;
								}
								if(pole[a+1][b+2]==1 || pole[a+1][b+2]==2 || pole[a+1][b+2]==3 || pole[a+1][b+2]==4 || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
								{
									help=pole[a+1][b+2];
									pole[a+1][b+2]=pole[a][b];
									pole[a][b]=13;
									if(23!=sachb(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a+1][b+2];
									pole[a+1][b+2]=help;
								}
								if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
								{
									help=pole[a-1][b+2];
									pole[a-1][b+2]=pole[a][b];
									pole[a][b]=13;
									if(23!=sachb(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a-1][b+2];
									pole[a-1][b+2]=help;
								}
								if(pole[a+2][b-1]==1 || pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
								{
									help=pole[a+2][b-1];
									pole[a+2][b-1]=pole[a][b];
									pole[a][b]=13;
									if(23!=sachb(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a+2][b-1];
									pole[a+2][b-1]=help;
								}
							}
							else
							{
								if(a==1 && b==2)
								{
									if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 || pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
									{
										help=pole[a+2][b+1];
										pole[a+2][b+1]=pole[a][b];
										pole[a][b]=13;
										if(23!=sachb(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a+2][b+1];
										pole[a+2][b+1]=help;
									}
									if(pole[a+1][b+2]==1 || pole[a+1][b+2]==2 || pole[a+1][b+2]==3 || pole[a+1][b+2]==4 || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
									{
										help=pole[a+1][b+2];
										pole[a+1][b+2]=pole[a][b];
										pole[a][b]=13;
										if(23!=sachb(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a+1][b+2];
										pole[a+1][b+2]=help;
									}
									if(pole[a+2][b-1]==1 || pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
									{
										help=pole[a+2][b-1];
										pole[a+2][b-1]=pole[a][b];
										pole[a][b]=13;
										if(23!=sachb(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a+2][b-1];
										pole[a+2][b-1]=help;
									}
								}
								else
								{
																		 //4. kvadrant
									if(a==8 && b==8)
									{
										if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
										{
											help=pole[a-2][b-1];
											pole[a-2][b-1]=pole[a][b];
											pole[a][b]=13;
											if(23!=sachb(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a-2][b-1];
											pole[a-2][b-1]=help;
										}
										if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
										{
											help=pole[a-1][b-2];
											pole[a-1][b-2]=pole[a][b];
											pole[a][b]=13;
											if(23!=sachb(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a-1][b-2];
											pole[a-1][b-2]=help;
                                        }
									}
									else
									{
										if(a==7 && b==8)
										{
											if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
											{
												help=pole[a-2][b-1];
												pole[a-2][b-1]=pole[a][b];
												pole[a][b]=13;
												if(23!=sachb(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a-2][b-1];
												pole[a-2][b-1]=help;
											}
											if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
											{
												help=pole[a-1][b-2];
												pole[a-1][b-2]=pole[a][b];
												pole[a][b]=13;
												if(23!=sachb(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a-1][b-2];
												pole[a-1][b-2]=help;
											}
											if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
											{
												help=pole[a+1][b-2];
												pole[a+1][b-2]=pole[a][b];
												pole[a][b]=13;
												if(23!=sachb(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a+1][b-2];
												pole[a+1][b-2]=help;
											}
										}
										else
										{
											if(a==7 && b==7)
											{
												if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
												{
													help=pole[a-2][b+1];
													pole[a-2][b+1]=pole[a][b];
													pole[a][b]=13;
													if(23!=sachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a-2][b+1];
													pole[a-2][b+1]=help;
												}
												if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
												{
													help=pole[a-2][b-1];
													pole[a-2][b-1]=pole[a][b];
													pole[a][b]=13;
													if(23!=sachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a-2][b-1];
													pole[a-2][b-1]=help;
												}
												if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
												{
													help=pole[a-1][b-2];
													pole[a-1][b-2]=pole[a][b];
													pole[a][b]=13;
													if(23!=sachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a-1][b-2];
													pole[a-1][b-2]=help;
												}
												if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
                                                {
													help=pole[a+1][b-2];
													pole[a+1][b-2]=pole[a][b];
													pole[a][b]=13;
													if(23!=sachb(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a+1][b-2];
													pole[a+1][b-2]=help;
												}
											}
											else
											{
												if(a==8 && b==7)
												{
													if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
													{
														help=pole[a-2][b+1];
														pole[a-2][b+1]=pole[a][b];
														pole[a][b]=13;
														if(23!=sachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-2][b+1];
														pole[a-2][b+1]=help;
													}
													if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
													{
														help=pole[a-2][b-1];
														pole[a-2][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=sachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-2][b-1];
														pole[a-2][b-1]=help;
													}
													if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
													{
														help=pole[a-1][b-2];
														pole[a-1][b-2]=pole[a][b];
														pole[a][b]=13;
														if(23!=sachb(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b-2];
														pole[a-1][b-2]=help;
                                                    }
												}
												else
												{
																			//1.kvadrant
													if(a==1 && b==8)
													{
														if(pole[a+2][b-1]==1 ||	pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
														{
															help=pole[a+2][b-1];
															pole[a+2][b-1]=pole[a][b];
															pole[a][b]=13;
															if(23!=sachb(pole))
															{
																pom=23;
															}
															pole[a][b]=pole[a+2][b-1];
															pole[a+2][b-1]=help;
														}
														if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
														{
															help=pole[a+1][b-2];
															pole[a+1][b-2]=pole[a][b];
															pole[a][b]=13;
															if(23!=sachb(pole))
															{
																pom=23;
															}
															pole[a][b]=pole[a+1][b-2];
															pole[a+1][b-2]=help;
                                                        }
													}
													else
													{
														if(a==1 && b==7)
														{
															if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 || pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
															{
																help=pole[a+2][b+1];
																pole[a+2][b+1]=pole[a][b];
																pole[a][b]=13;
																if(23!=sachb(pole))
																{
																	pom=23;
																}
																pole[a][b]=pole[a+2][b+1];
																pole[a+2][b+1]=help;
															}
															if(pole[a+2][b-1]==1 || pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
															{
																help=pole[a+2][b-1];
																pole[a+2][b-1]=pole[a][b];
																pole[a][b]=13;
																if(23!=sachb(pole))
																{
																	pom=23;
																}
																pole[a][b]=pole[a+2][b-1];
																pole[a+2][b-1]=help;
															}
															if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
															{
																help=pole[a+1][b-2];
																pole[a+1][b-2]=pole[a][b];
																pole[a][b]=13;
																if(23!=sachb(pole))
																{
																	pom=23;
																}
																pole[a][b]=pole[a+1][b-2];
																pole[a+1][b-2]=help;
															}
														}
														else
														{
															if(a==2 && b==8)
															{
																if(pole[a+2][b-1]==1 || pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
																{
																	help=pole[a+2][b-1];
																	pole[a+2][b-1]=pole[a][b];
																	pole[a][b]=13;
																	if(23!=sachb(pole))
																	{
																		pom=23;
																	}
																	pole[a][b]=pole[a+2][b-1];
																	pole[a+2][b-1]=help;
																}
																if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
																{
																	help=pole[a-1][b-2];
																	pole[a-1][b-2]=pole[a][b];
																	pole[a][b]=13;
																	if(23!=sachb(pole))
																	{
																		pom=23;
																	}
																	pole[a][b]=pole[a-1][b-2];
																	pole[a-1][b-2]=help;
                                                                }
																if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
																{
																	help=pole[a+1][b-2];
																	pole[a+1][b-2]=pole[a][b];
																	pole[a][b]=13;
																	if(23!=sachb(pole))
																	{
																		pom=23;
																	}
																	pole[a][b]=pole[a+1][b-2];
																	pole[a+1][b-2]=help;
                                                                }
															}
															else
															{
																if(a==2 && b==7)
																{
																	if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 || pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
																	{
																		help=pole[a+2][b+1];
																		pole[a+2][b+1]=pole[a][b];
																		pole[a][b]=13;
																		if(23!=sachb(pole))
																		{
																			pom=23;
																		}
																		pole[a][b]=pole[a+2][b+1];
																		pole[a+2][b+1]=help;
																	}
																	if(pole[a+2][b-1]==1 || pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
																	{
																		help=pole[a+2][b-1];
																		pole[a+2][b-1]=pole[a][b];
																		pole[a][b]=13;
																		if(23!=sachb(pole))
																		{
																			pom=23;
																		}
																		pole[a][b]=pole[a+2][b-1];
																		pole[a+2][b-1]=help;
																	}
																	if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
																	{
																		help=pole[a-1][b-2];
																		pole[a-1][b-2]=pole[a][b];
																		pole[a][b]=13;
																		if(23!=sachb(pole))
																		{
																			pom=23;
																		}
																		pole[a][b]=pole[a-1][b-2];
																		pole[a-1][b-2]=help;
																	}
																	if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
																	{
																		help=pole[a+1][b-2];
																		pole[a+1][b-2]=pole[a][b];
																		pole[a][b]=13;
																		if(23!=sachb(pole))
																		{
																			pom=23;
																		}
																		pole[a][b]=pole[a+1][b-2];
																		pole[a+1][b-2]=help;
                                                                    }
																}
																else
																{
																								//3. kvadrant
																	if(a==8 && b==1)
																	{
																		if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
																		{
																			help=pole[a-2][b+1];
																			pole[a-2][b+1]=pole[a][b];
																			pole[a][b]=13;
																			if(23!=sachb(pole))
																			{
																				pom=23;
																			}
																			pole[a][b]=pole[a-2][b+1];
																			pole[a-2][b+1]=help;
																		}
																		if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
																		{
																			help=pole[a-1][b+2];
																			pole[a-1][b+2]=pole[a][b];
																			pole[a][b]=13;
																			if(23!=sachb(pole))
																			{
																				pom=23;
																			}
																			pole[a][b]=pole[a-1][b+2];
																			pole[a-1][b+2]=help;
																		}
																	}
																	else
																	{
																		if(a==8 && b==2)
																		{
																			if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
																			{
																				help=pole[a-2][b+1];
																				pole[a-2][b+1]=pole[a][b];
																				pole[a][b]=13;
																				if(23!=sachb(pole))
																				{
																					pom=23;
																				}
																				pole[a][b]=pole[a-2][b+1];
																				pole[a-2][b+1]=help;
																			}
																			if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
																			{
																				help=pole[a-1][b+2];
																				pole[a-1][b+2]=pole[a][b];
																				pole[a][b]=13;
																				if(23!=sachb(pole))
																				{
																					pom=23;
																				}
																				pole[a][b]=pole[a-1][b+2];
																				pole[a-1][b+2]=help;
                                                                            }
																			if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
																			{
																				help=pole[a-2][b-1];
																				pole[a-2][b-1]=pole[a][b];
																				pole[a][b]=13;
																				if(23!=sachb(pole))
																				{
																					pom=23;
																				}
																				pole[a][b]=pole[a-2][b-1];
																				pole[a-2][b-1]=help;
                                                                            }
																		}
																		else
																		{
																			if(a==7 && b==1)
																			{
																				if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
																				{
																					help=pole[a-2][b+1];
																					pole[a-2][b+1]=pole[a][b];
																					pole[a][b]=13;
																					if(23!=sachb(pole))
																					{
																						pom=23;
																					}
																					pole[a][b]=pole[a-2][b+1];
																					pole[a-2][b+1]=help;
																				}
																				if(pole[a+1][b+2]==1 || pole[a+1][b+2]==2 || pole[a+1][b+2]==3 || pole[a+1][b+2]==4 || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
																				{
																					help=pole[a+1][b+2];
																					pole[a+1][b+2]=pole[a][b];
																					pole[a][b]=13;
																					if(23!=sachb(pole))
																					{
																						pom=23;
																					}
																					pole[a][b]=pole[a+1][b+2];
																					pole[a+1][b+2]=help;
                                                                                }
																				if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
																				{
																					help=pole[a-1][b+2];
																					pole[a-1][b+2]=pole[a][b];
																					pole[a][b]=13;
																					if(23!=sachb(pole))
																					{
																						pom=23;
																					}
																					pole[a][b]=pole[a-1][b+2];
																					pole[a-1][b+2]=help;
																				}
																			}
																			else
																			{
																				if(a==7 && b==2)
																				{
																					if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
																					{
																						help=pole[a-2][b+1];
																						pole[a-2][b+1]=pole[a][b];
																						pole[a][b]=13;
																						if(23!=sachb(pole))
																						{
																							pom=23;
																						}
																						pole[a][b]=pole[a-2][b+1];
																						pole[a-2][b+1]=help;
																					}
																					if(pole[a+1][b+2]==1 || pole[a+1][b+2]==2 || pole[a+1][b+2]==3 || pole[a+1][b+2]==4 || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
																					{
																						help=pole[a+1][b+2];
																						pole[a+1][b+2]=pole[a][b];
																						pole[a][b]=13;
																						if(23!=sachb(pole))
																						{
																							pom=23;
																						}
																						pole[a][b]=pole[a+1][b+2];
																						pole[a+1][b+2]=help;
																					}
																					if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
																					{
																						help=pole[a-1][b+2];
																						pole[a-1][b+2]=pole[a][b];
																						pole[a][b]=13;
																						if(23!=sachb(pole))
																						{
																							pom=23;
																						}
																						pole[a][b]=pole[a-1][b+2];
																						pole[a-1][b+2]=help;
																					}
																					if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
																					{
																						help=pole[a-2][b-1];
																						pole[a-2][b-1]=pole[a][b];
																						pole[a][b]=13;
																						if(23!=sachb(pole))
																						{
																							pom=23;
																						}
																						pole[a][b]=pole[a-2][b-1];
																						pole[a-2][b-1]=help;
                                                                                    }
																				}
																				else
																				{
																					if(a==1)
																					{
																						if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 || pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
																						{
																							help=pole[a+2][b+1];
																							pole[a+2][b+1]=pole[a][b];
																							pole[a][b]=13;
																							if(23!=sachb(pole))
																							{
																								pom=23;
																							}
																							pole[a][b]=pole[a+2][b+1];
																							pole[a+2][b+1]=help;
																						}
																						if(pole[a+1][b+2]==1 || pole[a+1][b+2]==2 || pole[a+1][b+2]==3 || pole[a+1][b+2]==4 || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
																						{
																							help=pole[a+1][b+2];
																							pole[a+1][b+2]=pole[a][b];
																							pole[a][b]=13;
																							if(23!=sachb(pole))
																							{
																								pom=23;
																							}
																							pole[a][b]=pole[a+1][b+2];
																							pole[a+1][b+2]=help;
																						}
																						if(pole[a+2][b-1]==1 || pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
																						{
																							help=pole[a+2][b-1];
																							pole[a+2][b-1]=pole[a][b];
																							pole[a][b]=13;
																							if(23!=sachb(pole))
																							{
																								pom=23;
																							}
																							pole[a][b]=pole[a+2][b-1];
																							pole[a+2][b-1]=help;
																						}
																						if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
																						{
																							help=pole[a+1][b-2];
																							pole[a+1][b-2]=pole[a][b];
																							pole[a][b]=13;
																							if(23!=sachb(pole))
																							{
																								pom=23;
																							}
																							pole[a][b]=pole[a+1][b-2];
																							pole[a+1][b-2]=help;
																						}
																					}
																					else
																					{
																						if(a==2)
																						{
																							if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 || pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
																							{
																								help=pole[a+2][b+1];
																								pole[a+2][b+1]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=sachb(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a+2][b+1];
																								pole[a+2][b+1]=help;
																							}
																							if(pole[a+1][b+2]==1 || pole[a+1][b+2]==2 || pole[a+1][b+2]==3 || pole[a+1][b+2]==4 || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
																							{
																								help=pole[a+1][b+2];
																								pole[a+1][b+2]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=sachb(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a+1][b+2];
																								pole[a+1][b+2]=help;
                                                                                            }
																							if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
																							{
																								help=pole[a-1][b+2];
																								pole[a-1][b+2]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=sachb(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a-1][b+2];
																								pole[a-1][b+2]=help;
                                                                                            }
																							if(pole[a+2][b-1]==1 || pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
																							{
																								help=pole[a+2][b-1];
																								pole[a+2][b-1]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=sachb(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a+2][b-1];
																								pole[a+2][b-1]=help;
                                                                                            }
																							if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
																							{
																								help=pole[a-1][b-2];
																								pole[a-1][b-2]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=sachb(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a-1][b-2];
																								pole[a-1][b-2]=help;
                                                                                            }
																							if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
																							{
																								help=pole[a+1][b-2];
																								pole[a+1][b-2]=pole[a][b];
																								pole[a][b]=13;
																								if(23!=sachb(pole))
																								{
																									pom=23;
																								}
																								pole[a][b]=pole[a+1][b-2];
																								pole[a+1][b-2]=help;
                                                                                            }
																						}
																						else
																						{
																							if(a==7)
																							{
																								if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
																								{
																									help=pole[a-2][b+1];
																									pole[a-2][b+1]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachb(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a-2][b+1];
																									pole[a-2][b+1]=help;
																								}
																								if(pole[a+1][b+2]==1 || pole[a+1][b+2]==2 || pole[a+1][b+2]==3 || pole[a+1][b+2]==4 || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
																								{
																									help=pole[a+1][b+2];
																									pole[a+1][b+2]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachb(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a+1][b+2];
																									pole[a+1][b+2]=help;
																								}
																								if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
																								{
																									help=pole[a-1][b+2];
																									pole[a-1][b+2]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachb(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a-1][b+2];
																									pole[a-1][b+2]=help;
																								}
																								if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
																								{
																									help=pole[a-2][b-1];
																									pole[a-2][b-1]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachb(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a-2][b-1];
																									pole[a-2][b-1]=help;
                                                                                                }
																								if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
																								{
																									help=pole[a-1][b-2];
																									pole[a-1][b-2]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachb(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a-1][b-2];
																									pole[a-1][b-2]=help;
                                                                                                }
																								if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
																								{
																									help=pole[a+1][b-2];
																									pole[a+1][b-2]=pole[a][b];
																									pole[a][b]=13;
																									if(23!=sachb(pole))
																									{
																										pom=23;
																									}
																									pole[a][b]=pole[a+1][b-2];
																									pole[a+1][b-2]=help;
																								}
																							}
																							else
																							{
																								if(a==8)
																								{
																									if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
																									{
																										help=pole[a-2][b+1];
																										pole[a-2][b+1]=pole[a][b];
																										pole[a][b]=13;
																										if(23!=sachb(pole))
																										{
																											pom=23;
																										}
																										pole[a][b]=pole[a-2][b+1];
																										pole[a-2][b+1]=help;
																									}
																									if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
																									{
																										help=pole[a-1][b+2];
																										pole[a-1][b+2]=pole[a][b];
																										pole[a][b]=13;
																										if(23!=sachb(pole))
																										{
																											pom=23;
																										}
																										pole[a][b]=pole[a-1][b+2];
																										pole[a-1][b+2]=help;
																									}
																									if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
																									{
																										help=pole[a-2][b-1];
																										pole[a-2][b-1]=pole[a][b];
																										pole[a][b]=13;
																										if(23!=sachb(pole))
																										{
																											pom=23;
																										}
																										pole[a][b]=pole[a-2][b-1];
																										pole[a-2][b-1]=help;
																									}
																									if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
																									{
																										help=pole[a-1][b-2];
																										pole[a-1][b-2]=pole[a][b];
																										pole[a][b]=13;
																										if(23!=sachb(pole))
																										{
																											pom=23;
																										}
																										pole[a][b]=pole[a-1][b-2];
																										pole[a-1][b-2]=help;
																									}
																								}
																								else
																								{
																									if(b==1)
																									{
																										if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 || pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
																										{
																											help=pole[a+2][b+1];
																											pole[a+2][b+1]=pole[a][b];
																											pole[a][b]=13;
																											if(23!=sachb(pole))
																											{
																												pom=23;
																											}
																											pole[a][b]=pole[a+2][b+1];
																											pole[a+2][b+1]=help;
																										}
																										if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
																										{
																											help=pole[a-2][b+1];
																											pole[a-2][b+1]=pole[a][b];
																											pole[a][b]=13;
																											if(23!=sachb(pole))
																											{
																												pom=23;
																											}
																											pole[a][b]=pole[a-2][b+1];
																											pole[a-2][b+1]=help;
																										}
																										if(pole[a+1][b+2]==1 || pole[a+1][b+2]==2 || pole[a+1][b+2]==3 || pole[a+1][b+2]==4 || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
																										{
																											help=pole[a+1][b+2];
																											pole[a+1][b+2]=pole[a][b];
																											pole[a][b]=13;
																											if(23!=sachb(pole))
																											{
																												pom=23;
																											}
																											pole[a][b]=pole[a+1][b+2];
																											pole[a+1][b+2]=help;
                                                                                                        }
																										if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
																										{
																											help=pole[a-1][b+2];
																											pole[a-1][b+2]=pole[a][b];
																											pole[a][b]=13;
																											if(23!=sachb(pole))
																											{
																												pom=23;
																											}
																											pole[a][b]=pole[a-1][b+2];
																											pole[a-1][b+2]=help;
                                                                                                        }
																									}
																									else
																									{
																										if(b==2)
																										{
																											if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 || pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
																											{
																												help=pole[a+2][b+1];
																												pole[a+2][b+1]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachb(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a+2][b+1];
																												pole[a+2][b+1]=help;
																											}
																											if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
																											{
																												help=pole[a-2][b+1];
																												pole[a-2][b+1]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachb(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a-2][b+1];
																												pole[a-2][b+1]=help;
                                                                                                            }
																											if(pole[a+1][b+2]==1 || pole[a+1][b+2]==2 || pole[a+1][b+2]==3 || pole[a+1][b+2]==4 || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
																											{
																												help=pole[a+1][b+2];
																												pole[a+1][b+2]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachb(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a+1][b+2];
																												pole[a+1][b+2]=help;
                                                                                                            }
																											if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
																											{
																												help=pole[a-1][b+2];
																												pole[a-1][b+2]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachb(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a-1][b+2];
																												pole[a-1][b+2]=help;
                                                                                                            }
																											if(pole[a+2][b-1]==1 || pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
																											{
																												help=pole[a+2][b-1];
																												pole[a+2][b-1]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachb(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a+2][b-1];
																												pole[a+2][b-1]=help;
                                                                                                            }
																											if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
																											{
																												help=pole[a-2][b-1];
																												pole[a-2][b-1]=pole[a][b];
																												pole[a][b]=13;
																												if(23!=sachb(pole))
																												{
																													pom=23;
																												}
																												pole[a][b]=pole[a-2][b-1];
																												pole[a-2][b-1]=help;
																											}
																										}
																										else
																										{
																											if(b==7)
																											{
																												if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 || pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
																												{
																													help=pole[a+2][b+1];
																													pole[a+2][b+1]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachb(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a+2][b+1];
																													pole[a+2][b+1]=help;
																												}
																												if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
																												{
																													help=pole[a-2][b+1];
																													pole[a-2][b+1]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachb(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a-2][b+1];
																													pole[a-2][b+1]=help;
																												}
																												if(pole[a+2][b-1]==1 || pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
																												{
																													help=pole[a+2][b-1];
																													pole[a+2][b-1]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachb(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a+2][b-1];
																													pole[a+2][b-1]=help;
																												}
																												if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
																												{
																													help=pole[a-2][b-1];
																													pole[a-2][b-1]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachb(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a-2][b-1];
																													pole[a-2][b-1]=help;
																												}
																												if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
																												{
																													help=pole[a-1][b-2];
																													pole[a-1][b-2]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachb(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a-1][b-2];
																													pole[a-1][b-2]=help;
																												}
																												if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
																												{
																													help=pole[a+1][b-2];
																													pole[a+1][b-2]=pole[a][b];
																													pole[a][b]=13;
																													if(23!=sachb(pole))
																													{
																														pom=23;
																													}
																													pole[a][b]=pole[a+1][b-2];
																													pole[a+1][b-2]=help;
																												}
																											}
																											else
																											{
																												if(b==8)
																												{
																													if(pole[a+2][b-1]==1 || pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
																													{
																														help=pole[a+2][b-1];
																														pole[a+2][b-1]=pole[a][b];
																														pole[a][b]=13;
																														if(23!=sachb(pole))
																														{
																															pom=23;
																														}
																														pole[a][b]=pole[a+2][b-1];
																														pole[a+2][b-1]=help;
																													}
																													if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
																													{
																														help=pole[a-2][b-1];
																														pole[a-2][b-1]=pole[a][b];
																														pole[a][b]=13;
																														if(23!=sachb(pole))
																														{
																															pom=23;
																														}
																														pole[a][b]=pole[a-2][b-1];
																														pole[a-2][b-1]=help;
																													}
																													if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
																													{
																														help=pole[a-1][b-2];
																														pole[a-1][b-2]=pole[a][b];
																														pole[a][b]=13;
																														if(23!=sachb(pole))
																														{
																															pom=23;
																														}
																														pole[a][b]=pole[a-1][b-2];
																														pole[a-1][b-2]=help;
																													}
																													if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
																													{
																														help=pole[a+1][b-2];
																														pole[a+1][b-2]=pole[a][b];
																														pole[a][b]=13;
																														if(23!=sachb(pole))
																														{
																															pom=23;
																														}
																														pole[a][b]=pole[a+1][b-2];
																														pole[a+1][b-2]=help;
                                                                                                                    }
																												}
																												else
																												{
																													if(a>2 && a<7)
																													{
																														if(b>2 && b<7)
																														{
																															if(pole[a+2][b+1]==1 || pole[a+2][b+1]==2 || pole[a+2][b+1]==3 || pole[a+2][b+1]==4 || pole[a+2][b+1]==5 || pole[a+2][b+1]>=13)
																															{
																																help=pole[a+2][b+1];
																																pole[a+2][b+1]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachb(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a+2][b+1];
																																pole[a+2][b+1]=help;
																															}
																															if(pole[a-2][b+1]==1 || pole[a-2][b+1]==2 || pole[a-2][b+1]==3 || pole[a-2][b+1]==4 || pole[a-2][b+1]==5 || pole[a-2][b+1]>=13)
																															{
																																help=pole[a-2][b+1];
																																pole[a-2][b+1]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachb(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a-2][b+1];
																																pole[a-2][b+1]=help;
																															}
																															if(pole[a+1][b+2]==1 || pole[a+1][b+2]==2 || pole[a+1][b+2]==3 || pole[a+1][b+2]==4 || pole[a+1][b+2]==5 || pole[a+1][b+2]>=13)
																															{
																																help=pole[a+1][b+2];
																																pole[a+1][b+2]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachb(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a+1][b+2];
																																pole[a+1][b+2]=help;
																															}
																															if(pole[a-1][b+2]==1 || pole[a-1][b+2]==2 || pole[a-1][b+2]==3 || pole[a-1][b+2]==4 || pole[a-1][b+2]==5 || pole[a-1][b+2]>=13)
																															{
																																help=pole[a-1][b+2];
																																pole[a-1][b+2]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachb(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a-1][b+2];
																																pole[a-1][b+2]=help;
																															}
																															if(pole[a+2][b-1]==1 || pole[a+2][b-1]==2 || pole[a+2][b-1]==3 || pole[a+2][b-1]==4 || pole[a+2][b-1]==5 || pole[a+2][b-1]>=13)
																															{
																																help=pole[a+2][b-1];
																																pole[a+2][b-1]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachb(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a+2][b-1];
																																pole[a+2][b-1]=help;
																															}
																															if(pole[a-2][b-1]==1 || pole[a-2][b-1]==2 || pole[a-2][b-1]==3 || pole[a-2][b-1]==4 || pole[a-2][b-1]==5 || pole[a-2][b-1]>=13)
																															{
																																help=pole[a-2][b-1];
																																pole[a-2][b-1]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachb(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a-2][b-1];
																																pole[a-2][b-1]=help;
																															}
																															if(pole[a-1][b-2]==1 || pole[a-1][b-2]==2 || pole[a-1][b-2]==3 || pole[a-1][b-2]==4 || pole[a-1][b-2]==5 || pole[a-1][b-2]>=13)
																															{
																																help=pole[a-1][b-2];
																																pole[a-1][b-2]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachb(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a-1][b-2];
																																pole[a-1][b-2]=help;
																															}
																															if(pole[a+1][b-2]==1 || pole[a+1][b-2]==2 || pole[a+1][b-2]==3 || pole[a+1][b-2]==4 || pole[a+1][b-2]==5 || pole[a+1][b-2]>=13)
																															{
																																help=pole[a+1][b-2];
																																pole[a+1][b-2]=pole[a][b];
																																pole[a][b]=13;
																																if(23!=sachb(pole))
																																{
																																	pom=23;
																																}
																																pole[a][b]=pole[a+1][b-2];
																																pole[a+1][b-2]=help;
																															}
																														}
																													}
																												}
																											}
                                                                                                        }
																									}
                                                                                                }
																							}
																						}
                                                                                    }
																				}
																			}
                                                                        }
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if(pole[a][b]==9)
				{
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
				}
			if(pole[a][b]==10)
				{
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
				}
				if(pole[a][b]==11)
				{
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							help=pole[c][d];
							pole[c][d]=pole[a][b];
							pole[a][b]=13;
							if(23!=sachb(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[c][d];
							pole[c][d]=help;
						}
					}
				}
				if(pole[a][b]==12)
				{
					if(a==1 && b==1)
					{
						if(pole[a+1][b+1]==1 || pole[a+1][b+1]==2 || pole[a+1][b+1]==3 || pole[a+1][b+1]==4 || pole[a+1][b+1]==5 || pole[a+1][b+1]>=13)
						{
							help=pole[a+1][b+1];
							pole[a+1][b+1]=pole[a][b];
							pole[a][b]=13;
							if(23!=vlastnisachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[a+1][b+1];
							pole[a+1][b+1]=help;
						}
						if(pole[a+1][b]==1 || pole[a+1][b]==2 || pole[a+1][b]==3 || pole[a+1][b]==4 || pole[a+1][b]==5 || pole[a+1][b]>=13)
						{
							help=pole[a+1][b];
							pole[a+1][b]=pole[a][b];
							pole[a][b]=13;
							if(23!=vlastnisachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[a+1][b];
							pole[a+1][b]=help;
						}
						if(pole[a][b+1]==1 || pole[a][b+1]==2 || pole[a][b+1]==3 || pole[a][b+1]==4 || pole[a][b+1]==5 || pole[a][b+1]>=13)
						{
							help=pole[a][b+1];
							pole[a][b+1]=pole[a][b];
							pole[a][b]=13;
							if(23!=vlastnisachc(pole))
							{
								pom=23;
							}
							pole[a][b]=pole[a][b+1];
							pole[a][b+1]=help;
						}
					}
					else
					{
						if(a==1 && b==8)
						{
							if(pole[a+1][b]==1 || pole[a+1][b]==2 || pole[a+1][b]==3 || pole[a+1][b]==4 || pole[a+1][b]==5 || pole[a+1][b]>=13)
							{
								help=pole[a+1][b];
								pole[a+1][b]=pole[a][b];
								pole[a][b]=13;
								if(23!=vlastnisachc(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a+1][b];
								pole[a+1][b]=help;
							}
							if(pole[a+1][b-1]==1 || pole[a+1][b-1]==2 || pole[a+1][b-1]==3 || pole[a+1][b-1]==4 || pole[a+1][b-1]==5 || pole[a+1][b-1]>=13)
							{
								help=pole[a+1][b-1];
								pole[a+1][b-1]=pole[a][b];
								pole[a][b]=13;
								if(23!=vlastnisachc(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a+1][b-1];
								pole[a+1][b-1]=help;
                            }
							if(pole[a][b-1]==1 || pole[a][b-1]==2 || pole[a][b-1]==3 || pole[a][b-1]==4 || pole[a][b-1]==5 || pole[a][b-1]>=13)
							{
								help=pole[a][b-1];
								pole[a][b-1]=pole[a][b];
								pole[a][b]=13;
								if(23!=vlastnisachc(pole))
								{
									pom=23;
								}
								pole[a][b]=pole[a][b-1];
								pole[a][b-1]=help;
							}
						}
						else
						{
							if(a==8 && b==1)
							{
								if(pole[a][b+1]==1 || pole[a][b+1]==2 || pole[a][b+1]==3 || pole[a][b+1]==4 || pole[a][b+1]==5 || pole[a][b+1]>=13)
								{
									help=pole[a][b+1];
									pole[a][b+1]=pole[a][b];
									pole[a][b]=13;
									if(23!=vlastnisachc(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a][b+1];
									pole[a][b+1]=help;
								}
								if(pole[a-1][b+1]==1 || pole[a-1][b+1]==2 || pole[a-1][b+1]==3 || pole[a-1][b+1]==4 || pole[a-1][b+1]==5 || pole[a-1][b+1]>=13)
								{
									help=pole[a-1][b+1];
									pole[a-1][b+1]=pole[a][b];
									pole[a][b]=13;
									if(23!=vlastnisachc(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a-1][b+1];
									pole[a-1][b+1]=help;
                                }
								if(pole[a-1][b]==1 || pole[a-1][b]==2 || pole[a-1][b]==3 || pole[a-1][b]==4 || pole[a-1][b]==5 || pole[a-1][b]>=13)
								{
									help=pole[a-1][b];
									pole[a-1][b]=pole[a][b];
									pole[a][b]=13;
									if(23!=vlastnisachc(pole))
									{
										pom=23;
									}
									pole[a][b]=pole[a-1][b];
									pole[a-1][b]=help;
                                }
							}
							else
							{
								if(a==8 && b==8)
								{
									if(pole[a][b-1]==1 || pole[a][b-1]==2 || pole[a][b-1]==3 || pole[a][b-1]==4 || pole[a][b-1]==5 || pole[a][b-1]>=13)
									{
										help=pole[a][b-1];
										pole[a][b-1]=pole[a][b];
										pole[a][b]=13;
										if(23!=vlastnisachc(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a][b-1];
										pole[a][b-1]=help;
									}
									if(pole[a-1][b]==1 || pole[a-1][b]==2 || pole[a-1][b]==3 || pole[a-1][b]==4 || pole[a-1][b]==5 || pole[a-1][b]>=13)
									{
										help=pole[a-1][b];
										pole[a-1][b]=pole[a][b];
										pole[a][b]=13;
										if(23!=vlastnisachc(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a-1][b];
										pole[a-1][b]=help;
                                    }
									if(pole[a-1][b-1]==1 || pole[a-1][b-1]==2 || pole[a-1][b-1]==3 || pole[a-1][b-1]==4 || pole[a-1][b-1]==5 || pole[a-1][b-1]>=13)
									{
										help=pole[a-1][b-1];
										pole[a-1][b-1]=pole[a][b];
										pole[a][b]=13;
										if(23!=vlastnisachc(pole))
										{
											pom=23;
										}
										pole[a][b]=pole[a-1][b-1];
										pole[a-1][b-1]=help;
                                    } 
								}
								else
								{
									if(a==1)
									{
										if(pole[a+1][b+1]==1 || pole[a+1][b+1]==2 || pole[a+1][b+1]==3 || pole[a+1][b+1]==4 || pole[a+1][b+1]==5 || pole[a+1][b+1]>=13)
										{
											help=pole[a+1][b+1];
											pole[a+1][b+1]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachc(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a+1][b+1];
											pole[a+1][b+1]=help;
										}
										if(pole[a+1][b]==1 || pole[a+1][b]==2 || pole[a+1][b]==3 || pole[a+1][b]==4 || pole[a+1][b]==5 || pole[a+1][b]>=13)
										{
											help=pole[a+1][b];
											pole[a+1][b]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachc(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a+1][b];
											pole[a+1][b]=help;
										}
										if(pole[a+1][b-1]==1 || pole[a+1][b-1]==2 || pole[a+1][b-1]==3 || pole[a+1][b-1]==4 || pole[a+1][b-1]==5 || pole[a+1][b-1]>=13)
										{
											help=pole[a+1][b-1];
											pole[a+1][b-1]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachc(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a+1][b-1];
											pole[a+1][b-1]=help;
										}
										if(pole[a][b+1]==1 || pole[a][b+1]==2 || pole[a][b+1]==3 || pole[a][b+1]==4 || pole[a][b+1]==5 || pole[a][b+1]>=13)
										{
											help=pole[a][b+1];
											pole[a][b+1]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachc(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a][b+1];
											pole[a][b+1]=help;
                                        }
										if(pole[a][b-1]==1 || pole[a][b-1]==2 || pole[a][b-1]==3 || pole[a][b-1]==4 || pole[a][b-1]==5 || pole[a][b-1]>=13)
										{
											help=pole[a][b-1];
											pole[a][b-1]=pole[a][b];
											pole[a][b]=13;
											if(23!=vlastnisachc(pole))
											{
												pom=23;
											}
											pole[a][b]=pole[a][b-1];
											pole[a][b-1]=help;
                                        }
									}
									else
									{
										if(a==8)
										{
											if(pole[a][b+1]==1 || pole[a][b+1]==2 || pole[a][b+1]==3 || pole[a][b+1]==4 || pole[a][b+1]==5 || pole[a][b+1]>=13)
											{
												help=pole[a][b+1];
												pole[a][b+1]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachc(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a][b+1];
												pole[a][b+1]=help;
											}
											if(pole[a][b-1]==1 || pole[a][b-1]==2 || pole[a][b-1]==3 || pole[a][b-1]==4 || pole[a][b-1]==5 || pole[a][b-1]>=13)
											{
												help=pole[a][b-1];
												pole[a][b-1]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachc(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a][b-1];
												pole[a][b-1]=help;
											}
											if(pole[a-1][b+1]==1 || pole[a-1][b+1]==2 || pole[a-1][b+1]==3 || pole[a-1][b+1]==4 || pole[a-1][b+1]==5 || pole[a-1][b+1]>=13)
											{
												help=pole[a-1][b+1];
												pole[a-1][b+1]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachc(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a-1][b+1];
												pole[a-1][b+1]=help;
											}
											if(pole[a-1][b]==1 || pole[a-1][b]==2 || pole[a-1][b]==3 || pole[a-1][b]==4 || pole[a-1][b]==5 || pole[a-1][b]>=13)
											{
												help=pole[a-1][b];
												pole[a-1][b]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachc(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a-1][b];
												pole[a-1][b]=help;
											}
											if(pole[a-1][b-1]==1 || pole[a-1][b-1]==2 || pole[a-1][b-1]==3 || pole[a-1][b-1]==4 || pole[a-1][b-1]==5 || pole[a-1][b-1]>=13)
											{
												help=pole[a-1][b-1];
												pole[a-1][b-1]=pole[a][b];
												pole[a][b]=13;
												if(23!=vlastnisachc(pole))
												{
													pom=23;
												}
												pole[a][b]=pole[a-1][b-1];
												pole[a-1][b-1]=help;
											}
										}
										else
										{
											if(b==1)
											{
												if(pole[a+1][b+1]==1 || pole[a+1][b+1]==2 || pole[a+1][b+1]==3 || pole[a+1][b+1]==4 || pole[a+1][b+1]==5 || pole[a+1][b+1]>=13)
												{
													help=pole[a+1][b+1];
													pole[a+1][b+1]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachc(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a+1][b+1];
													pole[a+1][b+1]=help;
												}
												if(pole[a+1][b]==1 || pole[a+1][b]==2 || pole[a+1][b]==3 || pole[a+1][b]==4 || pole[a+1][b]==5 || pole[a+1][b]>=13)
												{
													help=pole[a+1][b];
													pole[a+1][b]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachc(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a+1][b];
													pole[a+1][b]=help;
												}
												if(pole[a][b+1]==1 || pole[a][b+1]==2 || pole[a][b+1]==3 || pole[a][b+1]==4 || pole[a][b+1]==5 || pole[a][b+1]>=13)
												{
													help=pole[a][b+1];
													pole[a][b+1]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachc(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a][b+1];
													pole[a][b+1]=help;
												}
												if(pole[a-1][b+1]==1 || pole[a-1][b+1]==2 || pole[a-1][b+1]==3 || pole[a-1][b+1]==4 || pole[a-1][b+1]==5 || pole[a-1][b+1]>=13)
												{
													help=pole[a-1][b+1];
													pole[a-1][b+1]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachc(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a-1][b+1];
													pole[a-1][b+1]=help;
												}
												if(pole[a-1][b]==1 || pole[a-1][b]==2 || pole[a-1][b]==3 || pole[a-1][b]==4 || pole[a-1][b]==5 || pole[a-1][b]>=13)
												{
													help=pole[a-1][b];
													pole[a-1][b]=pole[a][b];
													pole[a][b]=13;
													if(23!=vlastnisachc(pole))
													{
														pom=23;
													}
													pole[a][b]=pole[a-1][b];
													pole[a-1][b]=help;
												}
											}
											else
											{
												if(b==8)
												{
													if(pole[a+1][b]==1 || pole[a+1][b]==2 || pole[a+1][b]==3 || pole[a+1][b]==4 || pole[a+1][b]==5 || pole[a+1][b]>=13)
													{
														help=pole[a+1][b];
														pole[a+1][b]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a+1][b];
														pole[a+1][b]=help;
													}
													if(pole[a+1][b-1]==1 || pole[a+1][b-1]==2 || pole[a+1][b-1]==3 || pole[a+1][b-1]==4 || pole[a+1][b-1]==5 || pole[a+1][b-1]>=13)
													{
														help=pole[a+1][b-1];
														pole[a+1][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a+1][b-1];
														pole[a+1][b-1]=help;
													}
													if(pole[a][b-1]==1 || pole[a][b-1]==2 || pole[a][b-1]==3 || pole[a][b-1]==4 || pole[a][b-1]==5 || pole[a][b-1]>=13)
													{
														help=pole[a][b-1];
														pole[a][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a][b-1];
														pole[a][b-1]=help;
													}
													if(pole[a-1][b]==1 || pole[a-1][b]==2 || pole[a-1][b]==3 || pole[a-1][b]==4 || pole[a-1][b]==5 || pole[a-1][b]>=13)
													{
														help=pole[a-1][b];
														pole[a-1][b]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b];
														pole[a-1][b]=help;
													}
													if(pole[a-1][b-1]==1 || pole[a-1][b-1]==2 || pole[a-1][b-1]==3 || pole[a-1][b-1]==4 || pole[a-1][b-1]==5 || pole[a-1][b-1]>=13)
													{
														help=pole[a-1][b-1];
														pole[a-1][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b-1];
														pole[a-1][b-1]=help;
													}
												}
												else
												{
													if(pole[a+1][b+1]==1 || pole[a+1][b+1]==2 || pole[a+1][b+1]==3 || pole[a+1][b+1]==4 || pole[a+1][b+1]==5 || pole[a+1][b+1]>=13)
													{
														help=pole[a+1][b+1];
														pole[a+1][b+1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a+1][b+1];
														pole[a+1][b+1]=help;
													}
													if(pole[a+1][b]==1 || pole[a+1][b]==2 || pole[a+1][b]==3 || pole[a+1][b]==4 || pole[a+1][b]==5 || pole[a+1][b]>=13)
													{
														help=pole[a+1][b];
														pole[a+1][b]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a+1][b];
														pole[a+1][b]=help;
													}
													if(pole[a+1][b-1]==1 || pole[a+1][b-1]==2 || pole[a+1][b-1]==3 || pole[a+1][b-1]==4 || pole[a+1][b-1]==5 || pole[a+1][b-1]>=13)
													{
														help=pole[a+1][b-1];
														pole[a+1][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a+1][b-1];
														pole[a+1][b-1]=help;
													}
													if(pole[a][b+1]==1 || pole[a][b+1]==2 || pole[a][b+1]==3 || pole[a][b+1]==4 || pole[a][b+1]==5 || pole[a][b+1]>=13)
													{
														help=pole[a][b+1];
														pole[a][b+1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a][b+1];
														pole[a][b+1]=help;
													}
													if(pole[a][b-1]==1 || pole[a][b-1]==2 || pole[a][b-1]==3 || pole[a][b-1]==4 || pole[a][b-1]==5 || pole[a][b-1]>=13)
													{
														help=pole[a][b-1];
														pole[a][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a][b-1];
														pole[a][b-1]=help;
													}
													if(pole[a-1][b+1]==1 || pole[a-1][b+1]==2 || pole[a-1][b+1]==3 || pole[a-1][b+1]==4 || pole[a-1][b+1]==5 || pole[a-1][b+1]>=13)
													{
														help=pole[a-1][b+1];
														pole[a-1][b+1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b+1];
														pole[a-1][b+1]=help;
													}
													if(pole[a-1][b]==1 || pole[a-1][b]==2 || pole[a-1][b]==3 || pole[a-1][b]==4 || pole[a-1][b]==5 || pole[a-1][b]>=13)
													{
														help=pole[a-1][b];
														pole[a-1][b]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b];
														pole[a-1][b]=help;
													}
													if(pole[a-1][b-1]==1 || pole[a-1][b-1]==2 || pole[a-1][b-1]==3 || pole[a-1][b-1]==4 || pole[a-1][b-1]==5 || pole[a-1][b-1]>=13)
													{
														help=pole[a-1][b-1];
														pole[a-1][b-1]=pole[a][b];
														pole[a][b]=13;
														if(23!=vlastnisachc(pole))
														{
															pom=23;
														}
														pole[a][b]=pole[a-1][b-1];
														pole[a-1][b-1]=help;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return pom;                          //konecobrany sachu
}
void tahz(int pole[9][9],int x, int y,int o, int p,int *mod,int *tah,int *stav,int ***polerem,int *tretirozmer,int *zmena_pincla,int obtiznost)
{
	int static mat=0,rem=0;                                           //pouziti pro urceni remizy a sach matu
	int pomoc;                                           //pomoc-urceni jestli byl tah uskutecneny, tah-promenna pro zjisteni kdo je na tahu a kolik tahu jiz bylo udelano
	int m,k,t,e;
	int static vez1=0,vez2=0,vez3=0,vez4=0,kral1=0,kral2=0;   //mkte-pomocne promenne, vez1-4 a kral1-2 promenne pro overeni rosady
	int sachh;
	int mezisoucet=0;
	*stav=0;
	k=pomoc=m=t=e=0;
	if(pole[1][1]==7 || pole[2][1]==7 || pole[3][1]==7 || pole[4][1]==7 || pole[5][1]==7 || pole[6][1]==7 || pole[7][1]==7 || pole[8][1]==7)
	{
		pomoc=7;                                                                                                                                            //podminky pro funkcnost zmeny pincla
	}
	if(pole[1][8]==1 || pole[2][8]==1 || pole[3][8]==1 || pole[4][8]==1 || pole[5][8]==1 || pole[6][8]==1 || pole[7][8]==1 || pole[8][8]==1)
	{
		pomoc=1;
	}
	if(*tah==0)
	{
		vez1=0;
		vez2=0;
		vez3=0;
		vez4=0;
		kral1=0;
		kral2=0;
    }
	if(pole[1][1]!=4)                                   //pomocne podminky pro rosadu
	{
		vez1=1;
	}
	if(pole[4][1]!=6)
	{
		kral1=1;
	}
	if(pole[8][1]!=4)
	{
		vez2=1;
	}
	if(pole[4][8]!=12)
	{
		kral2=1;
	}
	if(pole[1][8]!=10)
	{
		vez3=1;
	}
	if(pole[8][8]!=10)
	{
		vez4=1;
	}

	if(*mod==2)                                          	//*mod pro hrac s bilymi vs pocitac
	{
		if(0!=((*tah)%2))                         //jestli je na tahu pocitac
		{
			aic(&x,&y,&o,&p,pole,obtiznost);      //ai pro cerné figurky
		}
	}
	if(*mod==3)                                             	//*mod pro hrac s cernyma vs pocitac
	{
		if(0==((*tah)%2))                         //jestli je na tahu pocitac
		{
			aib(&x,&y,&o,&p,pole,obtiznost);      //ai pro bílé figurky
		}
	}
	if(*mod==4)                                              //*mod pro pocivac vs pocitac
	{
		if(0!=((*tah)%2))
		{
			aic(&x,&y,&o,&p,pole,obtiznost);        //ai pro cerné figurky
		}
		else
		{
			aib(&x,&y,&o,&p,pole,obtiznost);        //ai pro bílé figurky
		}
	}
	if(pole[x][y]>=1 && pole[x][y]<=12)           					//jestli jsme vybrali figurku
	{
																	/*zacatek bileho pincla*/
		if(pole[x][y]==1)                                           //je vybrana figurka bili pincl?
		{
			if(0==(*tah)%2)                              				//overeni jestli je na tahu bílí
			{
				if(y==2 && p==y+2)                                  //tah pinclem o 2 policka vpred
				{
					if(pole[x][y+1]>=1 && pole[x][y+1]<=12)         //podminka zdali je pred pinclem figurka
					{
						(*tah)--;                                      //osetreni tahu
					}
					else
					{
						if(pole[o][p]>=13 && x==o)                	//podminka zda na cilovych souradnicich je volno a zaroven x-sova souradnice figurky se schoduje s x-ovou cile
						{
							pomoc=pole[o][p];                    	//provede se tah
							pole[o][p]=pole[x][y];
							pole[x][y]=13;
							if(23!=vlastnisachb(pole))               	//overeni zda jsme tahem nezpusobili vlastnimu krali sach
							{
								pole[x][y+1]=((*tah)+14);             	//ulozeni udaje do pole pro tah mimochodem pro soupere
							}
						}
						else
						{
							(*tah)--;                              //osetreni tahu
						}
					}
				}
				else
				{
					if(pole[o][p]>=(13))                             //je volno na cilovem policku?
					{
						if((p==(y+1)) && (x==o))                     //je cilove pole vzdaleno o 1 od pincla?
						{                                              //tah o 1 pole vpred
							pomoc=pole[o][p];
							pole[o][p]=pole[x][y];
							pole[x][y]=13;
						}
						else
						{
							if(pole[o][p]==((*tah)+14-1) && pole[o][p-1]==7)
							{
								if(p==(y+1))
								{                                                  //tahy mimochodem
									if(o==x+1)
									{
										pomoc=pole[o][p];                       //proved tah mimochodem
										pole[o][p]=pole[x][y];
										pole[x][y]=13;
										pole[o][p-1]=13;
										if(vlastnisachb(pole)==23)
										{                                       //osetreni tahu mimochodem
											pole[x][y]=pole[o][p];
											pole[o][p]=pomoc;
											pole[o][p-1]=7;
											(*tah)--;
											pomoc=0;
										}
									}
									else
									{
										if(o==x-1)
										{
											pomoc=pole[o][p];                   //proved tah mimochdem
											pole[o][p]=pole[x][y];
											pole[x][y]=13;
											pole[o][p-1]=13;
											if(vlastnisachb(pole)==23)
											{                                   //osetreni tahu mimochodem
												pole[x][y]=pole[o][p];
												pole[o][p]=pomoc;
												pole[o][p-1]=7;
												(*tah)--;
												pomoc=0;
											}
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
					}
					else
					{
						if(pole[o][p]>=7 && pole[o][p]<=12)                     //je na cilovem poly nepratelska figurka?
						{
							if(p==(y+1))
							{                                                   //tahy pro vyhozeni pinclem
								if(o==x+1)
								{
									pomoc=pole[o][p];                           //provedeni tahu,vyhozeni nepratelskefigurky
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									if(o==x-1)
									{
										pomoc=pole[o][p];                      	//provedeni tahu,vyhozeni nepratelskefigurky
										pole[o][p]=pole[x][y];
										pole[x][y]=13;
									}
									else
									{
										(*tah)--;                              //osetreni tahu
									}
								}
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
						else
						{
							(*tah)--;
                        }
					}
				}
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}                                  /*konec bileho pincla*/
		if(pole[x][y]==2)                   /*zacatek bileho kone*/
		{
			if(0==((*tah)%2))                         //jestli je na tahu bili
			{
				if(pole[o][p]!=1 && pole[o][p]!=2 && pole[o][p]!=3 && pole[o][p]!=4 && pole[o][p]!=5 && pole[o][p]!=6)     //neskoc na sveho
				{
					if(o==x+2 || o==x-2)
					{
						if(p==y+1 || p==y-1)
						{
							 pomoc=pole[o][p];
							 pole[o][p]=pole[x][y];
							 pole[x][y]=13;
						}
						else
						{
							 (*tah)--;                              //osetreni tahu
						}
					}
					else
					{
						if(p==y+2 || p==y-2)
						{
							if(o==x+1 || o==x-1)
							{
								pomoc=pole[o][p];
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
						else
						{
							(*tah)--;                              //osetreni tahu
						}
					}
				}
				else
				{
					(*tah)--;                              //osetreni tahu
				}
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}                                         /*konec bileho kone*/
		if(pole[x][y]==3)                                  /*zacatek strelce*/
		{
			if(0==((*tah)%2))                         //jestli je na tahu bili
			{
			  if(pole[o][p]!=1 && pole[o][p]!=2 && pole[o][p]!=3 && pole[o][p]!=4 && pole[o][p]!=5 && pole[o][p]!=6)        //neskoc na sveho
			  {
				if(o>x && p>y)                                    /*4. kvadrant*/
				{
				  if((o-x)==(p-y))                                //osetreni spravneho smeru
				  {
					m=x;
					t=y;
					for(k=1;k<(o-x);k++)
					{
						m++;
						t++;
						if(pole[m][t]>=1 && pole[m][t]<=12)        //je v ceste nejaka figurka?
						  {
							 e=123;
						  }
					  }
					  if(e!=123)                             	//je tah platny?
					  {
						pomoc=pole[o][p];                       //proved tah
						pole[o][p]=pole[x][y];
						pole[x][y]=13;
					  }
					  else
					  {
						(*tah)--;                              //osetreni tahu
					  }
					}
					else
					{
					  (*tah)--;                              //osetreni tahu
					}
				}
				else
				{
					if(o>x && p<y)                            /*1.kvadrant*/
					{
						if((o-x)==(y-p))                       //osetreni spravneho smeru
						{
								m=x;
								t=y;
								for(k=1;k<(o-x);k++)
								{
									m++;
									t--;
									if(pole[m][t]>=1 && pole[m][t]<=12)         //nestoji v ceste neco?
									{
										e=123;
									}
								}
								if(e!=123)                                       //je tah platny?
								{
									pomoc=pole[o][p];                            //proved tah
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
								(*tah)--;                              //osetreni tahu
								}
						}
						else
						{
							(*tah)--;                              //osetreni tahu
                        }
					}
					else
					{
						if(o<x && p>y)                          /*3.kvadrant*/
						{
							if((x-o)==(p-y))                                    //osetreni spravneho smeru
							{
								m=x;
								t=y;
								for(k=1;k<(x-o);k++)
								{
									m--;
									t++;
									if(pole[m][t]>=1 && pole[m][t]<=12)         //nestoji neco v ceste?
									{
										e=123;
									}
								}
								if(e!=123)                                      //je tah platny?
								{
									pomoc=pole[o][p];                           //proved tah
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								(*tah)--;                              //osetreni tahu
                            }
						}
						else
						{
							if(o<x && p<y)                     /*2.kvadrant*/
							{
								if((x-o)==(y-p))                                //osetreni spravneho smeru
								{
									m=x;
									t=y;
									for(k=1;k<(x-o);k++)
									{
										m--;
										t--;
										if(pole[m][t]>=1 && pole[m][t]<=12)     //nestoji v ceste neco?
										{
											e=123;
										}
									}
									if(e!=123)                                  //je tah platny?
									{
										pomoc=pole[o][p];                       //proved tah
										pole[o][p]=pole[x][y];
										pole[x][y]=13;
									}
									else
									{
										(*tah)--;                              //osetreni tahu
									}
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
					}
				}
			  }
			  else
			  {
				(*tah)--;                              //osetreni tahu
			  }
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}                                  /*konec strelce*/
		if(pole[x][y]==4)                      /*zacatek veze*/
		{
			if(0==((*tah)%2))                         //jestli je na tahu bili
			{
				if(pole[o][p]!=1 && pole[o][p]!=2 && pole[o][p]!=3 && pole[o][p]!=4 && pole[o][p]!=5 && pole[o][p]!=6)  	//neber vlastni figurky
				{
					if(o==x)
					{
						if(p>y)                                                 //overeni spravnosti smeru
						{
							m=x;
							t=y;
							for(k=1;k<(p-y);k++)
							{
								t++;
								if(pole[m][t]>=1 && pole[m][t]<=12)             //nestoji v ceste neco?
								{
									e=123;
								}
							}
							if(e!=123)                                          //je tah platny?
							{
								pomoc=pole[o][p];                               //proved tah
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
						else
						{
							m=x;
							t=y;
							for(k=1;k<(y-p);k++)
							{
								t--;
								if(pole[m][t]>=1 && pole[m][t]<=12)             //nestoji neco v ceste?
								{
									e=123;
								}
							}
							if(e!=123)                                          //je tah platny?
							{
								pomoc=pole[o][p];                               //proved tah
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
					}
					else
					{
						if(p==y)
						{
							if(o>x)                                             //overeni spravnosti smeru
							{
								m=x;
								t=y;
								for(k=1;k<(o-x);k++)
								{
									m++;
									if(pole[m][t]>=1 && pole[m][t]<=12)         //je neco v ceste?
									{
										e=123;
									}
								}
								if(e!=123)                                      //je tah platny?
								{
									pomoc=pole[o][p];                           //proved tah
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								m=x;
								t=y;
								for(k=1;k<(x-o);k++)
								{
									m--;
									if(pole[m][t]>=1 && pole[m][t]<=12)         //nestoji neco v ceste?
									{
										e=123;
									}
								}
								if(e!=123)                                      //je tah platny?
								{
									pomoc=pole[o][p];                           //proved tah
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
						}
						else
						{
							(*tah)--;                              //osetreni tahu
						}
					}
				}
				else
				{
					(*tah)--;                              //osetreni tahu
				}
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}                                    /*konec veze*/
		if(pole[x][y]==5)                      /*zacatek bile damy*/
		{
			if(0==((*tah)%2))                         //jestli je na tahu bili
			{
				if(pole[o][p]!=1 && pole[o][p]!=2 && pole[o][p]!=3 && pole[o][p]!=4 && pole[o][p]!=5 && pole[o][p]!=6)   		//neber vlastni
				{
					if(o==x)
					{
						if(p>y)                                       			//neber vlastni
						{
							m=x;
							t=y;
							for(k=1;k<(p-y);k++)
							{
								t++;
								if(pole[m][t]>=1 && pole[m][t]<=12)          	//stoji neco v ceste?
								{
									e=123;
								}
							}
							if(e!=123)                                         	//je tah platny?
							{
								pomoc=pole[o][p];                               //proved tah
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
						else
						{
							m=x;
							t=y;
							for(k=1;k<(y-p);k++)
							{
								t--;
								if(pole[m][t]>=1 && pole[m][t]<=12)             //nestoji v ceste neco?
								{
									e=123;
								}
							}
							if(e!=123)                                          //je tah platny?
							{
								pomoc=pole[o][p];                               //proved tah
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
					}
					else
					{
						if(p==y)
						{
							if(o>x)
							{
								m=x;
								t=y;
								for(k=1;k<(o-x);k++)
								{
									m++;
									if(pole[m][t]>=1 && pole[m][t]<=12)        	//nestoji neco v ceste?
									{
										e=123;
									}
								}
								if(e!=123)                                      //je tah platny?
								{
									pomoc=pole[o][p];                           //proved tah
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								m=x;
								t=y;
								for(k=1;k<(x-o);k++)
								{
									m--;
									if(pole[m][t]>=1 && pole[m][t]<=12)         //nestoji neco v ceste?
									{
										e=123;
									}
								}
								if(e!=123)                                      //je tah platny?
								{
									pomoc=pole[o][p];                           //proved tah
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
						}
						else
						{
							if(o>x && p>y)                                    /*4. kvadrant*/
							{
								if((o-x)==(p-y))
								{
									m=x;
									t=y;
									for(k=1;k<(o-x);k++)
									{
										m++;
										t++;
										if(pole[m][t]>=1 && pole[m][t]<=12)     //nestoji neco v ceste
										{
											 e=123;
										}
									}
									if(e!=123)                                  //je tah platny?
									{
										pomoc=pole[o][p];                       //proved tah
										pole[o][p]=pole[x][y];
										pole[x][y]=13;
									}
									else
									{
										(*tah)--;                              //osetreni tahu
									}
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								if(o>x && p<y)                            /*1.kvadrant*/
								{
									if((o-x)==(y-p))
									{
										m=x;
										t=y;
										for(k=1;k<(o-x);k++)
										{
											m++;
											t--;
											if(pole[m][t]>=1 && pole[m][t]<=12) 	//nestoji neco v ceste?
											{
												e=123;
											}
										}
										if(e!=123)                              	//je tah platny?
										{
											pomoc=pole[o][p];                    	//proved tah
											pole[o][p]=pole[x][y];
											pole[x][y]=13;
										}
										else
										{
										(*tah)--;                              //osetreni tahu
										}
									}
									else
									{
										(*tah)--;                              //osetreni tahu
									}
								}
								else
								{
									if(o<x && p>y)                          /*3.kvadrant*/
									{
										if((x-o)==(p-y))
										{
											m=x;
											t=y;
											for(k=1;k<(x-o);k++)
											{
												m--;
												t++;
												if(pole[m][t]>=1 && pole[m][t]<=12)     	//nestoji neco v ceste?
												{
													e=123;
												}
											}
											if(e!=123)                                   	//je tah platny?
											{
												pomoc=pole[o][p];                          	//proved tah
												pole[o][p]=pole[x][y];
												pole[x][y]=13;
											}
											else
											{
												(*tah)--;                              //osetreni tahu
											}
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
									else
									{
										if(o<x && p<y)                     /*2.kvadrant*/
										{
											if((x-o)==(y-p))
											{
												m=x;
												t=y;
												for(k=1;k<(x-o);k++)
												{
													m--;
													t--;
													if(pole[m][t]>=1 && pole[m][t]<=12)     	//nestoji neco v ceste?
													{
														e=123;
													}
												}
												if(e!=123)                                      //je tah platny?
												{
													pomoc=pole[o][p];                         	//proved tah
													pole[o][p]=pole[x][y];
													pole[x][y]=13;
												}
												else
												{
													(*tah)--;                              //osetreni tahu
												}
											}
											else
											{
												(*tah)--;                              //osetreni tahu
											}
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
								}
							}
						}
					}
				}
				else
				{
					(*tah)--;                              //osetreni tahu
				}
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}                                            /*konec damy*/
		if(pole[x][y]==6)                      /*zacatek bileho krale*/
		{
			if(0==((*tah)%2))                         //jestli je na tahu bili
			{
				if(pole[o][p]!=1 && pole[o][p]!=2 && pole[o][p]!=3 && pole[o][p]!=4 && pole[o][p]!=5 && pole[o][p]!=6)
				{
					if(o==(x+1))
					{
						if(p==y)
						{
							pomoc=pole[o][p];
							pole[o][p]=pole[x][y];
							pole[x][y]=13;
						}
						else
						{
							if(p==(y+1))
							{
								pomoc=pole[o][p];
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								if(p==(y-1))
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
						}
					}
					else
					{
						if(o==x)
						{
							if(p==(y+1))
							{
								pomoc=pole[o][p];
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								if(p==(y-1))
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
						}
						else
						{
							if(o==(x-1))
							{
								if(p==(y+1))
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									if(p==y)
									{
										pomoc=pole[o][p];
										pole[o][p]=pole[x][y];
										pole[x][y]=13;
									}
									else
									{
										if(p==(y-1))
										{
											pomoc=pole[o][p];
											pole[o][p]=pole[x][y];
											pole[x][y]=13;
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
								}
							}
							else
							{
								if(x==4 && y==1)                                //je kral na spravne pozici?
								{
									if(o==2 && p==1)                           	//cilova pozice
									{
										if(kral1==0)                       		//hlo se uz s kralem?
										{
											if(vez1==0)                        	//hlo se uz s vezi?
											{
												if(pole[2][1]==13 && pole[3][1]==13)            //rozsada
												{
													pole[3][1]=6;
													if(vlastnisachb(pole)!=23)                      //nedostanu sach cestou?
													{
														if(23!=sachc(pole))
														{
															pole[1][1]=13;                      //proved tah
															pole[4][1]=13;
															pole[2][1]=6;
															pole[3][1]=4;
															pomoc=111;                      	//reknu tim programu ze byl proveden tah
															if(23==vlastnisachb(pole))            	//dostal jsem sah?
															{
																pole[1][1]=4;                  	//vratit do puvodniho stavu
																pole[4][1]=6;
																pole[2][1]=13;
																pole[3][1]=13;
																(*tah)--;                              //osetreni tahu
																pomoc=0;                           	//reknu programu ze nebyl proveden tah nebo byl neplatny
															}
														}
														else
														{
															(*tah)--;                              //osetreni tahu
														}
													}
													else
													{
														pole[3][1]=13;                      //vraceni spravne hodnoty, byla pouzita pro zjisteni sachu pri pohybu krale pri rosade
														(*tah)--;                              //osetreni tahu
                                                    }
												}
												else
												{
													(*tah)--;                              //osetreni tahu
												}
											}
											else
											{
												(*tah)--;                              //osetreni tahu
											}
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
									else
									{
										if(o==6 && p==1)
										{
											if(kral1==0)
											{
												if(vez2==0)
												{
													if(pole[5][1]==13 && pole[6][1]==13 && pole[7][1]==13)        //rozsada
													{
														pole[5][1]=6;
														if(vlastnisachb(pole)!=23)
														{
															if(23!=sachc(pole))
															{
																pole[8][1]=13;
																pole[4][1]=13;
																pole[7][1]=13;
																pole[6][1]=6;
																pole[5][1]=4;
																pomoc=111;
																if(23==vlastnisachb(pole))
																{
																	pole[8][1]=4;
																	pole[4][1]=6;
																	pole[7][1]=13;
																	pole[6][1]=13;
																	pole[5][1]=13;
																	(*tah)--;                              //osetreni tahu
																	pomoc=0;
																}
															}
															else
															{
																(*tah)--;                              //osetreni tahu
															}
														}
														else
														{
															pole[5][1]=13;
															(*tah)--;                              //osetreni tahu
                                                        }
													}
													else
													{
														(*tah)--;                              //osetreni tahu
													}
												}
												else
												{
													(*tah)--;                              //osetreni tahu
												}
											}
											else
											{
												(*tah)--;                              //osetreni tahu
											}
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
								}
								else
								{
									(*tah)--;                              //osetreni tahu
                                }
							}
						}
					}
				}
				else
				{
					(*tah)--;                              //osetreni tahu
				}
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}                                          /*konec krale*/
		if(pole[x][y]==7)                  /*zacatek cerneho pincla*/
		{
			if(0!=((*tah)%2))                         //jestli je na tahu cerny
			{
				if(y==7 && p==(y-2))
				{
					if(pole[x][y-1]>=1 && pole[x][y-1]<=12)      	//je pred pinclem neco?
					{
						(*tah)--;                              //osetreni tahu
					}
					else
					{
						if(pole[o][p]>=13 && x==o)                   	 //je cilove misto spravne s moznosti tahu pincla?
						{
							pomoc=pole[o][p];                         		//proved tah-posun o 2 pole vpred
							pole[o][p]=pole[x][y];
							pole[x][y]=13;
							if(23!=vlastnisachc(pole))                         	//nedal jsem si tim sah?
							{
								pole[x][y-1]=((*tah)+14);                      //pomocna hodnota pro tah mimochoden nepratelskeho pincla
							}
						}
						else
						{
							(*tah)--;                              //osetreni tahu
						}
					}
				}
				else
				{
					if(pole[o][p]>=(13))
					{
						if((p==(y-1)) && (x==o))
						{
							pomoc=pole[o][p];
							pole[o][p]=pole[x][y];
							pole[x][y]=13;
						}
						else
						{
							if(pole[o][p]==((*tah)+14-1) && pole[o][p+1]==1)
							{
								if(p==(y-1))
								{                                                  //tahy mimochodem
									if(o==(x-1))
									{
										pomoc=pole[o][p];
										pole[o][p]=pole[x][y];
										pole[x][y]=13;
										pole[o][p+1]=13;
										if(vlastnisachc(pole)==23)
										{
											pole[x][y]=pole[o][p];
											pole[o][p]=pomoc;
											pole[o][p+1]=1;
											(*tah)--;                              //osetreni tahu
											pomoc=0;
										}
									}
									else
									{
										if(o==(x+1))
										{
											pomoc=pole[o][p];
											pole[o][p]=pole[x][y];
											pole[x][y]=13;
											pole[o][p+1]=13;
											if(vlastnisachc(pole)==23)
											{
												pole[x][y]=pole[o][p];
												pole[o][p]=pomoc;
												pole[o][p+1]=1;
												(*tah)--;                              //osetreni tahu
												pomoc=0;
											}
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
					}
					else
					{
						if(pole[o][p]>=1 && pole[o][p]<=6)
						{
							if(p==(y-1))
							{
								if(o==(x+1))
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									if(o==(x-1))
									{
										pomoc=pole[o][p];
										pole[o][p]=pole[x][y];
										pole[x][y]=13;
									}
									else
									{
										(*tah)--;                              //osetreni tahu
									}
								}
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
						else
						{
							(*tah)--;
                        }
					}
				}
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}     /*konec cerneho pincla*/
		if(pole[x][y]==8)                          /*zacatek cerneho kone*/
		{
			if(0!=((*tah)%2))                         //jestli je na tahu cerny
			{
				if(pole[o][p]!=7 && pole[o][p]!=8 && pole[o][p]!=9 && pole[o][p]!=10 && pole[o][p]!=11 && pole[o][p]!=12)
				{
					if(o==x+2 || o==x-2)
					{
						if(p==y+1 || p==y-1)
						{
							pomoc=pole[o][p];
							 pole[o][p]=pole[x][y];
							 pole[x][y]=13;
						}
						else
						{
							 (*tah)--;                              //osetreni tahu
						}
					}
					else
					{
						if(p==y+2 || p==y-2)
						{
							if(o==x+1 || o==x-1)
							{
								pomoc=pole[o][p];
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
						else
						{
							(*tah)--;                              //osetreni tahu
						}
					}
				}
				else
				{
					(*tah)--;                              //osetreni tahu
				}
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}                                           /*konec cerneho kone*/
		if(pole[x][y]==9)                                  /*zacatek cerneho strelce*/
		{
			if(0!=((*tah)%2))                         //jestli je na tahu cerny
			{
			  if(pole[o][p]!=7 && pole[o][p]!=8 && pole[o][p]!=9 && pole[o][p]!=10 && pole[o][p]!=11 && pole[o][p]!=12)
			  {
				if(o>x && p>y)                                    /*4. kvadrant*/
				{
				  if((o-x)==(p-y))
				  {
					m=x;
					t=y;
					for(k=1;k<(o-x);k++)
					{
						m++;
						t++;
						if(pole[m][t]>=1 && pole[m][t]<=12)
						  {
							 e=123;
						  }
					  }
					  if(e!=123)
					  {
						pomoc=pole[o][p];
						pole[o][p]=pole[x][y];
						pole[x][y]=13;
					  }
					  else
					  {
						(*tah)--;                              //osetreni tahu
					  }
					}
					else
					{
					  (*tah)--;                              //osetreni tahu
					}
				}
				else
				{
					if(o>x && p<y)                            /*1.kvadrant*/
					{
						if((o-x)==(y-p))
						{
								m=x;
								t=y;
								for(k=1;k<(o-x);k++)
								{
									m++;
									t--;
									if(pole[m][t]>=1 && pole[m][t]<=12)
									{
										e=123;
									}
								}
								if(e!=123)
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
								(*tah)--;                              //osetreni tahu
								}
						}
						else
						{
							(*tah)--;                              //osetreni tahu
						}
					}
					else
					{
						if(o<x && p>y)                          /*3.kvadrant*/
						{
							if((x-o)==(p-y))
							{
								m=x;
								t=y;
								for(k=1;k<(x-o);k++)
								{
									m--;
									t++;
									if(pole[m][t]>=1 && pole[m][t]<=12)
									{
										e=123;
									}
								}
								if(e!=123)
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
						else
						{
							if(o<x && p<y)                     /*2.kvadrant*/
							{
								if((x-o)==(y-p))
								{
									m=x;
									t=y;
									for(k=1;k<(x-o);k++)
									{
										m--;
										t--;
										if(pole[m][t]>=1 && pole[m][t]<=12)
										{
											e=123;
										}
									}
									if(e!=123)
									{
										pomoc=pole[o][p];
										pole[o][p]=pole[x][y];
										pole[x][y]=13;
									}
									else
									{
										(*tah)--;                              //osetreni tahu
									}
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
					}
				}
			  }
			  else
			  {																																				//Matìj Kotyz
				(*tah)--;                              //osetreni tahu
			  }
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}                    						/*konec cerneho strelce*/
		if(pole[x][y]==10)                      /*zacatek cerne veze*/
		{
			if(0!=((*tah)%2))                         //jestli je na tahu cerny
			{
				if(pole[o][p]!=7 && pole[o][p]!=8 && pole[o][p]!=9 && pole[o][p]!=10 && pole[o][p]!=11 && pole[o][p]!=12)
				{
					if(o==x)
					{
						if(p>y)
						{
							m=x;
							t=y;
							for(k=1;k<(p-y);k++)
							{
								t++;
								if(pole[m][t]>=1 && pole[m][t]<=12)
								{
									e=123;
								}
							}
							if(e!=123)
							{
								pomoc=pole[o][p];
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
						else
						{
							m=x;
							t=y;
							for(k=1;k<(y-p);k++)
							{
								t--;
								if(pole[m][t]>=1 && pole[m][t]<=12)
								{
									e=123;
								}
							}
							if(e!=123)
							{
								pomoc=pole[o][p];
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
					}
					else
					{
						if(p==y)
						{
							if(o>x)
							{
								m=x;
								t=y;
								for(k=1;k<(o-x);k++)
								{
									m++;
									if(pole[m][t]>=1 && pole[m][t]<=12)
									{
										e=123;
									}
								}
								if(e!=123)
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								m=x;
								t=y;
								for(k=1;k<(x-o);k++)
								{
									m--;
									if(pole[m][t]>=1 && pole[m][t]<=12)
									{
										e=123;
									}
								}
								if(e!=123)
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
						}
						else
						{
							(*tah)--;                              //osetreni tahu
						}
					}
				}
				else
				{
					(*tah)--;                              //osetreni tahu
				}
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}                                      /*konec cerne veze*/
		if(pole[x][y]==11)                      /*zacatek cerne damy*/
		{
			if(0!=((*tah)%2))                         //jestli je na tahu cerny
			{
				if(pole[o][p]!=7 && pole[o][p]!=8 && pole[o][p]!=9 && pole[o][p]!=10 && pole[o][p]!=11 && pole[o][p]!=12)
				{
					if(o==x)
					{
						if(p>y)
						{
							m=x;
							t=y;
							for(k=1;k<(p-y);k++)
							{
								t++;
								if(pole[m][t]>=1 && pole[m][t]<=12)
								{
									e=123;
								}
							}
							if(e!=123)
							{
								pomoc=pole[o][p];
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
						else
						{
							m=x;
							t=y;
							for(k=1;k<(y-p);k++)
							{
								t--;
								if(pole[m][t]>=1 && pole[m][t]<=12)
								{
									e=123;
								}
							}
							if(e!=123)
							{
								pomoc=pole[o][p];
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								(*tah)--;                              //osetreni tahu
							}
						}
					}
					else
					{
						if(p==y)
						{
							if(o>x)
							{
								m=x;
								t=y;
								for(k=1;k<(o-x);k++)
								{
									m++;
									if(pole[m][t]>=1 && pole[m][t]<=12)
									{
										e=123;
									}
								}
								if(e!=123)
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								m=x;
								t=y;
								for(k=1;k<(x-o);k++)
								{
									m--;
									if(pole[m][t]>=1 && pole[m][t]<=12)
									{
										e=123;
									}
								}
								if(e!=123)
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
						}
						else
						{
							if(o>x && p>y)                                    /*4. kvadrant*/
							{
								if((o-x)==(p-y))
								{
									m=x;
									t=y;
									for(k=1;k<(o-x);k++)
									{
										m++;
										t++;
										if(pole[m][t]>=1 && pole[m][t]<=12)
										{
											 e=123;
										}
									}
									if(e!=123)
									{
										pomoc=pole[o][p];
										pole[o][p]=pole[x][y];
										pole[x][y]=13;
									}
									else
									{
										(*tah)--;                              //osetreni tahu
									}
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
							else
							{
								if(o>x && p<y)                            /*1.kvadrant*/
								{
									if((o-x)==(y-p))
									{
										m=x;
										t=y;
										for(k=1;k<(o-x);k++)
										{
											m++;
											t--;
											if(pole[m][t]>=1 && pole[m][t]<=12)
											{
												e=123;
											}
										}
										if(e!=123)
										{
											pomoc=pole[o][p];
											pole[o][p]=pole[x][y];
											pole[x][y]=13;
										}
										else
										{
										(*tah)--;                              //osetreni tahu
										}
									}
									else
									{
										(*tah)--;                              //osetreni tahu
									}
								}
								else
								{
									if(o<x && p>y)                          /*3.kvadrant*/
									{
										if((x-o)==(p-y))
										{
											m=x;
											t=y;
											for(k=1;k<(x-o);k++)
											{
												m--;
												t++;
												if(pole[m][t]>=1 && pole[m][t]<=12)
												{
													e=123;
												}
											}
											if(e!=123)
											{
												pomoc=pole[o][p];
												pole[o][p]=pole[x][y];
												pole[x][y]=13;
											}
											else
											{
												(*tah)--;                              //osetreni tahu
											}
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
									else
									{
										if(o<x && p<y)                     /*2.kvadrant*/
										{
											if((x-o)==(y-p))
											{
												m=x;
												t=y;
												for(k=1;k<(x-o);k++)
												{
													m--;
													t--;
													if(pole[m][t]>=1 && pole[m][t]<=12)
													{
														e=123;
													}
												}
												if(e!=123)
												{
													pomoc=pole[o][p];
													pole[o][p]=pole[x][y];
													pole[x][y]=13;
												}
												else
												{
													(*tah)--;                              //osetreni tahu
												}
											}
											else
											{
												(*tah)--;                              //osetreni tahu
											}
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
								}
							}
						}
					}
				}
				else
				{
					(*tah)--;                              //osetreni tahu
				}
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}                                            /*konec cerne damy*/
		if(pole[x][y]==12)                      /*zacatek cerneho krale*/
		{
			if(0!=((*tah)%2))                         //jestli je na tahu cerny
			{
				if(pole[o][p]!=7 && pole[o][p]!=8 && pole[o][p]!=9 && pole[o][p]!=10 && pole[o][p]!=11 && pole[o][p]!=12)
				{
					if(o==(x+1))
					{
						if(p==y)
						{
							pomoc=pole[o][p];
							pole[o][p]=pole[x][y];
							pole[x][y]=13;
						}
						else
						{
							if(p==(y+1))
							{
								pomoc=pole[o][p];
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								if(p==(y-1))
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
						}
					}
					else
					{
						if(o==x)
						{
							if(p==(y+1))
							{
								pomoc=pole[o][p];
								pole[o][p]=pole[x][y];
								pole[x][y]=13;
							}
							else
							{
								if(p==(y-1))
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
						}
						else
						{
							if(o==(x-1))
							{
								if(p==(y+1))
								{
									pomoc=pole[o][p];
									pole[o][p]=pole[x][y];
									pole[x][y]=13;
								}
								else
								{
									if(p==y)
									{
										pomoc=pole[o][p];
										pole[o][p]=pole[x][y];
										pole[x][y]=13;
									}
									else
									{
										if(p==(y-1))
										{
											pomoc=pole[o][p];
											pole[o][p]=pole[x][y];
											pole[x][y]=13;
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
								}
							}
							else
							{
								if(x==4 && y==8)
								{
									if(o==2 && p==8)
									{
										if(kral2==0)
										{
											if(vez3==0)
											{                                                       //rosada
												if(pole[2][8]==13 && pole[3][8]==13)
												{
													pole[3][8]=12;
													if(vlastnisachc(pole)!=23)
													{
														if(23!=sachb(pole))
														{
															pole[1][8]=13;
															pole[4][8]=13;
															pole[2][8]=12;
															pole[3][8]=10;
															pomoc=111;
															if(23==vlastnisachc(pole))
															{
																pole[1][8]=10;
																pole[4][8]=12;
																pole[2][8]=13;
																pole[3][8]=13;
																(*tah)--;                              //osetreni tahu
																pomoc=0;
															}
														}
														else
														{
															(*tah)--;                              //osetreni tahu
														}
													}
													else
													{
														pole[3][8]=13;
														(*tah)--;                              //osetreni tahu
													}
												}
												else
												{
													(*tah)--;                              //osetreni tahu
												}
											}
											else
											{
												(*tah)--;                              //osetreni tahu
											}
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
									else
									{
										if(o==6 && p==8)
										{
											if(kral2==0)
											{
												if(vez4==0)
												{                                                                       //rosada
													if(pole[5][8]==13 && pole[6][8]==13 && pole[7][8]==13)
													{
														pole[5][8]=12;
														if(vlastnisachc(pole)!=23)
														{
															if(23!=sachb(pole))
															{
																pole[8][8]=13;
																pole[4][8]=13;
																pole[7][8]=13;
																pole[6][8]=12;
																pole[5][8]=10;
																pomoc=111;
																if(23==vlastnisachc(pole))
																{
																	pole[8][8]=10;
																	pole[4][8]=12;
																	pole[7][8]=13;
																	pole[6][8]=13;
																	pole[5][8]=13;
																	(*tah)--;                              //osetreni tahu
																	pomoc=0;
																}
															}
															else
															{
																(*tah)--;                              //osetreni tahu
															}
														}
														else
														{
															pole[5][8]=13;
															(*tah)--;                              //osetreni tahu
														}
													}
													else
													{
														(*tah)--;                              //osetreni tahu
													}
												}
												else
												{
													(*tah)--;                              //osetreni tahu
												}
											}
											else
											{
												(*tah)--;                              //osetreni tahu
											}
										}
										else
										{
											(*tah)--;                              //osetreni tahu
										}
									}
								}
								else
								{
									(*tah)--;                              //osetreni tahu
								}
							}
						}
					}
				}
				else
				{
					(*tah)--;                              //osetreni tahu
				}
			}
			else
			{
				(*tah)--;                              //osetreni tahu
			}
		}                                      /*konec cerneho krale*/
	}
	else
	{
		if(pole[1][1]==7 || pole[2][1]==7 || pole[3][1]==7 || pole[4][1]==7 || pole[5][1]==7 || pole[6][1]==7 || pole[7][1]==7 || pole[8][1]==7 || pole[1][8]==1 || pole[2][8]==1 || pole[3][8]==1 || pole[4][8]==1 || pole[5][8]==1 || pole[6][8]==1 || pole[7][8]==1 || pole[8][8]==1)
		{

		}
		else
		{
			(*tah)--;                      //osetreni tahu
		}  
	}
	sachh=0;
	if(0==((*tah)%2))                         //jestli je na tahu bili
	{
		if(pomoc!=0)                       		//byl proveden tah?
		{
			if(23==vlastnisachb(pole))         				//dal jsem si tahem sach?
			{
				pole[x][y]=pole[o][p];                  //napravim to
				pole[o][p]=pomoc;
				if(*mod==2 || *mod==1)                             	//*mod kdy hraje hrac za bile vs pocitaci
				{
					*stav=6;          					//zkus tahnout tak at nemas sach
				}
				(*tah)--;                              //osetreni tahu
				pomoc=0;
			}
			else
			{
				int c,d;
				for(c=1;c<9;c++)                           //cyklus pro premenu pincla
				{
					d=8;
					if(pole[c][d]==1)                  		//je na poslednim poli pincl?
					{

						while(*zmena_pincla<2 || *zmena_pincla>5)
						{
							if(*mod==2 || *mod==1)                      //jsi hrac?
							{

								if(*zmena_pincla==0)
								{
									*zmena_pincla=*zmena_pincla%0;   //vyvolani vyjimky pro vyber figurky
								}
							}
							else                            //nejsi hrac
							{
								*zmena_pincla=5;             //vyber si damu
                            }
						}
						if(*zmena_pincla==2 || *zmena_pincla==3 || *zmena_pincla==4 || *zmena_pincla==5)
						{
							pole[c][d]=*zmena_pincla;               //a proved zmenu
							*zmena_pincla=0;
						}
					}
				}
			}
		}
	}
	if(0!=((*tah)%2))                         //jestli je na tahu cerny
	{
		if(pomoc!=0)                      	//by proveden tah?
		{
			if(23==vlastnisachc(pole))             		//dal sis sam sach?
			{
				pole[x][y]=pole[o][p];               //naprav to
				pole[o][p]=pomoc;
				if(*mod==3 || *mod==1)                           //jsi hrac?
				{

					*stav=7;       						//zkus tahnout tak at nemas sach
				}
				(*tah)--;                              //osetreni tahu
				pomoc=0;
			}
			else
			{
				int c,d;
				for(c=1;c<9;c++)                       	//cyklus pro zmenu pincla
				{
					d=1;
					if(pole[c][d]==7)                       	//je pincle na konci sachovnice?
					{

						while(*zmena_pincla<8 || *zmena_pincla>11)
						{
							if(*mod==3 || *mod==1)                  //jsi hrac?
							{
								if(*zmena_pincla==0)
								{
								*zmena_pincla=*zmena_pincla%0;       //vyvolani vyjimky pro vyber figurky
								}
							}
							else                       //nejsi hrac
							{
								*zmena_pincla=11;        	//vyber damu
                            }
						}
						if(*zmena_pincla==8 || *zmena_pincla==9 || *zmena_pincla==10 || *zmena_pincla==11)
						{
							pole[c][d]=*zmena_pincla;     //proved zmenu
							*zmena_pincla=0;
						}
					}
				}
			}
		}
	}
	else
	{
		if(pomoc!=0)                      //byl proveden sach?
		{
			if(23==sachb(pole))               			//je bily kral v sachu?
			{
				*stav=1;							//promenna predavajici informaci, ze mas sach
				sachh=2;                  			//pomocna hodnota pro urceni matu
			}
		}
	}
	if(0!=((*tah)%2))                         //jestli je na tahu cerny
	{
		if(pomoc!=0)
		{
			if(23==sachc(pole))               			//je cerny kral v sachu?
			{
				*stav=2;                            //promenna predavajici informaci, ze mas sach
				sachh=1;                           //pomocna hodnota pro urcenu matu
			}
		}
	}
	if(sachh==1)                                  //mas sach?
	{
		if(23!=obranasachub(pole))                    //nemuzes se mu nejak vyhnout?
		{
			mat=1;
			*stav=3;                      //konec hry sach mat
		}
	}
	else
	{
		if(0!=((*tah)%2))                         //jestli je na tahu cerny
		{
			if(23!=obranasachub(pole))              //bili se nemuze hnout?
			{
				*stav=5;
				rem=1;                            //konec hry remiza
			}
		}
	}
	if(sachh==2)                                 //mas sach?
	{
		if(23!=obranasachuc(pole))                 	//a nemuzes se mu vyhnout?
		{
			*stav=4;
			mat=2;                               //konec hry sach mat
		}
	}
	else
	{
		if(0==((*tah)%2))                         //jestli je na tahu bili
		{
			if(23!=obranasachuc(pole))              //nemuze se cerny nikam pohnout?
			{
				*stav=5;
				rem=1;                            //konec hry remiza
			}
		}
	}
	if(pomoc!=0)                         //byl proveden tah?
	{
		if(remiza(pole)==1)                    //je remiza?
		{
			*stav=5;         //konec hry remiza
			rem=1;
		}
	}
	if((*tah)+1==(*tretirozmer))                   	//dosahl pocet tahu konecneho poctu zaznamu?
	{
		(*tretirozmer)=(*tretirozmer)+5;
		for(k=0;k<8;k++)
		{
			for(m=0;m<8;m++)
			{
				polerem[k][m]=(int*)realloc(polerem[k][m],sizeof(int)*(*tretirozmer));   //zvec misto pro dalsi zaznamy
			}
		}
	}
	for(k=1;k<9;k++)                                 //nacteni zaznamu
	{
		for(m=1;m<9;m++)
		{
			polerem[m-1][k-1][(*tah)+1]=pole[m][k];
		}
	}
	if(pomoc!=0)                                                     //reseni remizy trojiho opakujiciho se tahu
	{
			mezisoucet=0;
			for(t=1;t<=(*tah)+1;t++)
			{
				m=0;
				for(k=0;k<8;k++)
				{
					for(e=0;e<8;e++)
					{
						if(polerem[k][e][(*tah)+1]==polerem[k][e][t])
						{
							m++;
						}
						if(m==64)
						{
							mezisoucet=mezisoucet+1;
							if(mezisoucet==3)
							{
								*stav=5;
								rem=1;
							}
						}
					}
				}
			}
	}
	(*tah)++;
}
int remiza(int pole[9][9])
{
	int pinclb=0,kunb=0,vezb=0,damab=0,pinclc=0,vezc=0,kunc=0,damac=0,m,k,remiza=0;
	for(k=0;k<9;k++)
	{
		for(m=0;m<9;m++)
		{
			if(pole[m][k]==1)
			{
				pinclb++;
			}
			if(pole[m][k]==2)
			{
				kunb++;
			}
			if(pole[m][k]==3)
			{
				kunb++;
			}
			if(pole[m][k]==4)
			{
				vezb++;
			}
			if(pole[m][k]==5)
			{
				damab++;
			}
			if(pole[m][k]==7)
			{
				pinclc++;
			}
			if(pole[m][k]==8)
			{
				kunc++;
			}
			if(pole[m][k]==9)
			{
				kunc++;
			}
			if(pole[m][k]==10)
			{
				vezc++;
			}
			if(pole[m][k]==11)
			{
				damac++;
			}
		}
	}
	if(pinclb>=1 || kunb>=2 || vezb>=1 || damab>=1)
	{
	}
	else
	{
		if(pinclc>=1 || kunc>=2 || vezc>=1 || damac>=1)
		{
		}
		else
		{
			remiza=1;
		}
	}
	return remiza;                            //konec remizi
}
void nacistfigurky(int pole[9][9])
{
	int m,k;
	for(m=0;m<9;m++)                               		//naplneni sachovnice
	{
		for(k=0;k<9;k++)
		{
			pole[m][k]=(13);
		}
	}
	for(m=0;m<9;m++)
	{
	pole[m][0]=0-m;
	pole[0][m]=0-m;
	}
	for(k=1;k<9;k++)
	{
		pole[k][2]=1;
		pole[k][7]=7;
	}
	pole[1][1]=4;                                       //naplneni sachovnice
	pole[2][1]=2;
	pole[3][1]=3;
	pole[4][1]=6;
	pole[5][1]=5;
	pole[6][1]=3;
	pole[7][1]=2;
	pole[8][1]=4;
	pole[1][8]=10;
	pole[2][8]=8;
	pole[3][8]=9;
	pole[4][8]=12;
	pole[5][8]=11;
	pole[6][8]=9;
	pole[7][8]=8;
	pole[8][8]=10;
}
void stavb(int *bile,int pole[9][9])
{
	int c,d;
	*bile=0;
	for(d=1;d!=9;d++)
	{
		for(c=1;c!=9;c++)
		{
			if(pole[c][d]==1)
			{
				*bile=*bile+1;
			}
			if(pole[c][d]==2 || pole[c][d]==3)
			{
				*bile=*bile+3;
			}
			if(pole[c][d]==4)
			{
				*bile=*bile+5;
			}
			if(pole[c][d]==5)
			{
				*bile=*bile+9;
			}
			if(pole[c][d]==6)
			{
				*bile=*bile+1;
			}
		}
	}
}
void stavc(int *cerne,int pole[9][9])
{
	int c,d;
	*cerne=0;
	for(d=1;d!=9;d++)
	{
		for(c=1;c!=9;c++)
		{
			if(pole[c][d]==7)
			{
				*cerne=*cerne+1;
			}
			if(pole[c][d]==8 || pole[c][d]==9)
			{
				*cerne=*cerne+3;
			}
			if(pole[c][d]==10)
			{
				*cerne=*cerne+5;
			}
			if(pole[c][d]==11)
			{
				*cerne=*cerne+9;
			}
			if(pole[c][d]==12)
			{
				*cerne=*cerne+1;
			}
		}
	}
}


void aib(int *x,int *y,int *xkam,int *ykam,int pole[9][9],int obtiznost)
{
	int a,b,c,d;
	int startstavb;
	int startstavc;
	int hodnotac;
	int hodnotab;
	int hodnotas;
	int vnoreni;
	switch(obtiznost)
	{
		case 0:	//	ai-nahodne tahy
				aiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&hodnotac,&hodnotab,&hodnotas,a,b,c,d,startstavb,startstavc,pole,9);
				break;

		case 1: // ai-vem figurku s nejvetsi hodnotou
				aiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&hodnotac,&hodnotab,&hodnotas,a,b,c,d,startstavb,startstavc,pole,0);
				break;

		case 2: // ai - 3tahy dopredu
				aiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&hodnotac,&hodnotab,&hodnotas,a,b,c,d,startstavb,startstavc,pole,1);
				break;
	}

}
void aic(int *x,int *y,int *xkam,int *ykam,int pole[9][9],int obtiznost)
{
	int a,b,c,d;
	int startstavb;
	int startstavc;
	int hodnotab;
	int hodnotac;
	int hodnotas;
	int vnoreni;
	switch(obtiznost)
	{
		case 0:	//	ai-nahodne tahy
				aicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&hodnotab,&hodnotac,&hodnotas,a,b,c,d,startstavb,startstavc,pole,9);
				break;

		case 1: // ai-vem figurku s nejvetsi hodnotou
				aicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&hodnotab,&hodnotac,&hodnotas,a,b,c,d,startstavb,startstavc,pole,0);
				break;

		case 2: // ai - 3tahy dopredu
				aicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&hodnotab,&hodnotac,&hodnotas,a,b,c,d,startstavb,startstavc,pole,1);
				break;
	}
}
void vnitrekrtah(int *figurka,int *tah,int a,int b,int c,int d,int pole[9][9],souradnice vyber[16][20])
{
	int help;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;
	if(23!=vlastnisachc(pole))
	{
		vyber[*figurka][*tah].x=a;
		vyber[*figurka][*tah].y=b;
		vyber[*figurka][*tah].xx=c;
		vyber[*figurka][*tah].yy=d;
		if(*tah!=19)
		{
			(*tah)++;
			vyber[*figurka][*tah].x=1000;
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}
void vnitrekaic(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int *hodnotac,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9])
{
	int help,helpp,aa,bb,cc,dd,pomocna=0;
	*hodnotac=0;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;
	if(23!=vlastnisachc(pole))
	{
		if(23==obranasachub(pole))
		{
			aiballinone(&aa,&bb,&cc,&dd,&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,10);     //funkce na protitah
			helpp=pole[cc][dd];
			pole[cc][dd]=pole[aa][bb];
			pole[aa][bb]=13;
			pomocna=1;
		}
		aicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,2);    //funkce na 2.simulovaný tah
		if(*hodnotab>*hodnotas)              //jestliže je tah výhodnìjsi, nežli nasymulované pøedešlé tahy
		{
			*hodnotas=(*hodnotab);           //naplnìní hodnoty pro další porovnávání
			*x=a;                            //ulozeni souradnic tahu
			*y=b;
			*xkam=(c);
			*ykam=(d);
		}
		if(pomocna==1)                	//jesltiže byl proveden protitah
		{
			pole[aa][bb]=pole[cc][dd];   //nahraj stav sachovnice do podoby pred simulaci
			pole[cc][dd]=helpp;
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}
void vnitrekaicc(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int *hodnotac,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9])
{
	int help,helpp;
	int aktstavb,aktstavc;
	int aa,bb,cc,dd;
	int hodnota1,hodnota2;
	int pomocna=0;
	*hodnotac=0;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;

	if(23!=vlastnisachc(pole))
	{
		if(23==obranasachub(pole))
		{
			aiballinone(&aa,&bb,&cc,&dd,&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,10);   //nasimuluj protitah
			helpp=pole[cc][dd];
			pole[cc][dd]=pole[aa][bb];
			pole[aa][bb]=13;
			pomocna=1;
		}
		if(*hodnotab<1000 && 23!=obranasachub(pole) && 23==sachc(pole))       //jestli pri simulaci daš protihráèi mat
		{
			*hodnotab=1000;                                                   //nahraj vysokou hodnotu, aby tahy,ktere vedou k matu byli provedeny
		}
		else
		{
			aicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,3);    //nasymuluj 3. tah
		}
		if(pomocna==1)                        		//jestli byl proveden protitah
		{
			pole[aa][bb]=pole[cc][dd];            //nahraj stav sachovnice do podoby pred simulaci
			pole[cc][dd]=helpp;
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}
void vnitrekaiccc(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int *hodnotac,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9])
{
	int help,helpp;
	int aktstavb,aktstavc;
	int aa,bb,cc,dd;
	int hodnota1,hodnota2;
	int pomocna=0;
	*hodnotac=0;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;

	if(23!=vlastnisachc(pole))
	{
		if(23==obranasachub(pole))
		{
			aiballinone(&aa,&bb,&cc,&dd,&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,10);  //udelej protitah
			helpp=pole[cc][dd];
			pole[cc][dd]=pole[aa][bb];
			pole[aa][bb]=13;
			pomocna=1;
		}
		stavc(&aktstavc,pole);                      //zjisti hodnotu vsech cernych figurek na sachovnici
		stavb(&aktstavb,pole);                      //zjisti hodnotu vsech bilých figurek na šachovnici
		hodnota1=startstavb-aktstavb;               //uloz rozdil mezi hodnotou bilych figure pred simulaci a po simulaci
		hodnota2=startstavc-aktstavc;               //uloz rozdil mezi hodnotou cernych figure pred simulaci a po simulaci
		if(*hodnotab<(hodnota1-hodnota2))           //je aktuální simulace výhodnìjší nežli predešlé simulace?
		{
			*hodnotab=(hodnota1-hodnota2);          //nahraj hodnotu pro porovnávání v další simulaci
		}
		if(*hodnotab<800 && 23!=obranasachub(pole) && 23==sachc(pole))  //dali jsme pri simulaci tretihotahu mat?
		{
			*hodnotab=800;                        //nahraj vysokou hodnotu pro urèení matu ve tøetím tahu
		}
		if(pomocna==1)
		{
			pole[aa][bb]=pole[cc][dd];          //nahraj stav sachovnice do podoby pred simulaci
			pole[cc][dd]=helpp;
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}
void vnitrekzacatekaic(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int a,int b,int c,int d,int startstavb,int pole[9][9])
{
	int help;
	int aktstavb;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;
	if(23!=vlastnisachc(pole))
	{
		stavb(&aktstavb,pole);
		if(*hodnotab<(startstavb-aktstavb))
		{
			*hodnotab=(startstavb-aktstavb);
			*x=a;
			*y=b;
			*xkam=(c);
			*ykam=(d);
		}
		if(*hodnotab!=1000 && 23==sachc(pole) && 23!=obranasachub(pole))
		{
			*hodnotab=1000;
			*x=a;
			*y=b;
			*xkam=(c);
			*ykam=(d);
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}

void vnitrekprotitahaib(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int a,int b,int c,int d,int startstavb,int pole[9][9])
{
	int help;
	int aktstavb;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;
	if(23!=vlastnisachc(pole))
	{
		stavb(&aktstavb,pole);
		if(*hodnotab<(startstavb-aktstavb))
		{
			*hodnotab=(startstavb-aktstavb);
			*x=a;
			*y=b;
			*xkam=(c);
			*ykam=(d);
		}
		if(*hodnotab!=1000 && 23==sachc(pole) && 23!=obranasachub(pole))
		{
			*hodnotab=1000;
            *x=a;
			*y=b;
			*xkam=(c);
			*ykam=(d);
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}

void vnitrekrtahb(int *figurka,int *tah,int a,int b,int c,int d,int pole[9][9],souradnice vyber[16][20])
{
	int help;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;
	if(23!=vlastnisachb(pole))
	{
		vyber[*figurka][*tah].x=a;
		vyber[*figurka][*tah].y=b;
		vyber[*figurka][*tah].xx=c;
		vyber[*figurka][*tah].yy=d;
		if(*tah!=19)
		{
			(*tah)++;
			vyber[*figurka][*tah].x=1000;
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}

void vnitrekzacatekaib(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int a,int b,int c,int d,int startstavc,int pole[9][9])
{
	int help;
	int aktstavc;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;
	if(23!=vlastnisachb(pole))
	{
		stavc(&aktstavc,pole);
		if(*hodnotac<(startstavc-aktstavc))
		{
			*hodnotac=(startstavc-aktstavc);
			*x=a;
			*y=b;
			*xkam=(c);
			*ykam=(d);
		}
		if(*hodnotac!=1000 && 23==sachb(pole) && 23!=obranasachuc(pole))
		{
			*hodnotac=1000;
			*x=a;
			*y=b;
			*xkam=(c);
			*ykam=(d);
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}

void vnitrekaib(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int *hodnotab,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9])
{
	int help,helpp,aa,bb,cc,dd,pomocna=0;
	*hodnotab=0;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;
	if(23!=vlastnisachb(pole))
	{
		if(23==obranasachuc(pole))
		{
			aicallinone(&aa,&bb,&cc,&dd,&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,10);   //funkce na protitah
			helpp=pole[cc][dd];
			pole[cc][dd]=pole[aa][bb];
			pole[aa][bb]=13;
			pomocna=1;
		}
		aiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,2);  //funkce na 2.simulovaný tah
		if(*hodnotac>*hodnotas)                //jestliže je tah výhodnìjsi, nežli nasymulované pøedešlé tahy
		{
			*hodnotas=(*hodnotac);              //naplnìní hodnoty pro další porovnávání
			*x=a;                               //ulozeni souradnic tahu
			*y=b;
			*xkam=(c);
			*ykam=(d);
		}
		if(pomocna==1)                          //jesltiže byl proveden protitah
		{
			pole[aa][bb]=pole[cc][dd];          //nahraj stav sachovnice do podoby pred simulaci
			pole[cc][dd]=helpp;
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}

void vnitrekaibb(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int *hodnotab,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9])
{
	int help,helpp;
	int aktstavb,aktstavc;
	int aa,bb,cc,dd;
	int hodnota1,hodnota2;
	int pomocna=0;
	*hodnotab=0;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;

	if(23!=vlastnisachb(pole))
	{
		if(23==obranasachuc(pole))
		{
			aicallinone(&aa,&bb,&cc,&dd,&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,10);   //nasimuluj protitah
			helpp=pole[cc][dd];
			pole[cc][dd]=pole[aa][bb];
			pole[aa][bb]=13;
			pomocna=1;
		}
		if(*hodnotac<1000 && 23!=obranasachuc(pole) && 23==sachb(pole))        //jestli pri simulaci daš protihráèi mat
		{
			*hodnotac=1000;                                                   //nahraj vysokou hodnotu, aby tahy,ktere vedou k matu byli provedeny
		}
		else
		{
			aiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,3); //nasymuluj 3. tah
		}
		if(pomocna==1)
		{
			pole[aa][bb]=pole[cc][dd];               //nahraj stav sachovnice do podoby pred simulaci
			pole[cc][dd]=helpp;
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}

void vnitrekaibbb(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int *hodnotab,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9])
{
	int help,helpp;
	int aktstavb,aktstavc;
	int aa,bb,cc,dd;
	int hodnota1,hodnota2;
	int pomocna=0;
	*hodnotab=0;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;

	if(23!=vlastnisachb(pole))
	{
		if(23==obranasachuc(pole))
		{
			aicallinone(&aa,&bb,&cc,&dd,&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,10);  //udelej protitah
			helpp=pole[cc][dd];
			pole[cc][dd]=pole[aa][bb];
			pole[aa][bb]=13;
			pomocna=1;
		}
		stavc(&aktstavc,pole);                      //zjisti hodnotu vsech cernych figurek na sachovnici
		stavb(&aktstavb,pole);                      //zjisti hodnotu vsech bilých figurek na šachovnici
		hodnota1=startstavc-aktstavc;               //uloz rozdil mezi hodnotou cernych figure pred simulaci a po simulaci
		hodnota2=startstavb-aktstavb;               //uloz rozdil mezi hodnotou bilych figure pred simulaci a po simulaci
		if(*hodnotac<(hodnota1-hodnota2))           //je aktuální simulace výhodnìjší nežli predešlé simulace?
		{
			*hodnotac=(hodnota1-hodnota2);          //nahraj hodnotu pro porovnávání v další simulaci
		}
		if(*hodnotac<800 && 23!=obranasachuc(pole) && 23==sachb(pole))     //dali jsme pri simulaci tretihotahu mat?
		{
			*hodnotac=800;                          //nahraj vysokou hodnotu pro urèení matu ve tøetím tahu
		}
		if(pomocna==1)
		{
			pole[aa][bb]=pole[cc][dd];             //nahraj stav sachovnice do podoby pred simulaci
			pole[cc][dd]=helpp;
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}

void vnitrekprotitahaic(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int a,int b,int c,int d,int startstavc,int pole[9][9])
{
	int help;
	int aktstavc;
	help=pole[c][d];
	pole[c][d]=pole[a][b];
	pole[a][b]=13;
	if(23!=vlastnisachb(pole))
	{
		stavc(&aktstavc,pole);
		if(*hodnotac<(startstavc-aktstavc))
		{
			*hodnotac=(startstavc-aktstavc);
			*x=a;
			*y=b;
			*xkam=(c);
			*ykam=(d);
		}
		if(*hodnotac!=1000 && 23==sachb(pole) && 23!=obranasachuc(pole))
		{
			*hodnotac=1000;
			*x=a;
			*y=b;
			*xkam=(c);
			*ykam=(d);
		}
	}
	pole[a][b]=pole[c][d];
	pole[c][d]=help;
}

void aicallinone(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int *hodnotac,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9],int vnoreni)
{
	int aa;
	int bb;
	int cc;
	int dd;
	int help,helpp;
	int z;
	int pomocna;
	int tah;
	int figurka;
	souradnice vyber[16][20];

	if(vnoreni==0)                  //jedna se o zjistìní nejlepšího tahu bez ohledu na dalsi tahy?
	{
		startstavb=0;
		*hodnotab=0;
		stavb(&startstavb,pole);
	}
	if(vnoreni==1)                 //jedná se o simulaci 1. tahu?
	{
		startstavb=0;
		startstavc=0;
		*hodnotab=0;
		*hodnotac=0;
		*hodnotas=0;
		pomocna=0;
		z=0;
		stavb(&startstavb,pole);               //zjisti hodnotu všech bílých figurek
		stavc(&startstavc,pole);               //zjisti hodnotu všech èerných figurek

		aicallinone(&a,&b,&c,&d,&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,0);   //vrat souradnice "nejlepsiho" mozneho 1.tahu bez ohledu na dalsi tahy
		help=pole[c][d];
		pole[c][d]=pole[a][b];
		pole[a][b]=13;
		if(23==obranasachub(pole))
		{
			aiballinone(&aa,&bb,&cc,&dd,&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,10); //udelej protitah
			helpp=pole[cc][dd];
			pole[cc][dd]=pole[aa][bb];
			pole[aa][bb]=13;
			pomocna=1;
		}
		*hodnotab=(-20);

		aicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,2);     //	simulace 2. tahu
		if(pomocna==1)
		{
			pole[aa][bb]=pole[cc][dd];
			pole[cc][dd]=helpp;
		}
		pole[a][b]=pole[c][d];
		pole[c][d]=help;

		*hodnotas=*hodnotab;
		*x=a;                        //uloz souradnice "nejlepsiho" tahu
		*y=b;
		*xkam=(c);
		*ykam=(d);
		z=0;
	}
	if(vnoreni==9)           //jedná se o nahodný tah?
	{
		figurka=0;
		tah=0;
	}
	if(vnoreni==10)         //jedná se o protitah?
	{
		startstavb=0;
		*hodnotab=0;
		stavb(&startstavb,pole);
	}


	for(b=1;b!=9;b++)                           //cykli pro projetí celé šahovnice
	{
		for(a=1;a!=9;a++)
		{
			z=0;
			if(pole[a][b]>=7 && pole[a][b]<=12)      //podmínky pro symulaci tahù
			{
				if(pole[a][b]==7)
				{
					if(vnoreni==9)
					{
						tah=0;
					}
					c=a+1;
					d=b-1;
					if(pole[c][d]>=1 && pole[c][d]<=5)
					{
						if(a!=8)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					c=a-1;
					d=b-1;
					if(pole[c][d]>=1 && pole[c][d]<=5)
					{
						if(a!=1)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					c=a;
					d=b-1;
					if(pole[a][d]>=13)
					{
						vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						if(b==7)
						{
							c=a;
							d=b-2;
							if(pole[a][d]>=13)
							{
								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
				if(pole[a][b]==8)
				{
					if(vnoreni==9)
					{
						tah=0;
					}												 //2. kvadrant
					if(a==1 && b==1)
					{
						c=a+2;
						d=b+1;
						if(pole[c][d]==1 || pole[c][d]==2 ||pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
						c=a+1;
						d=b+2;
							if(pole[c][d]==1  || pole[c][d]==2 || pole[c][d]==3  || pole[c][d]==4  || pole[c][d]==5 || pole[c][d]>=13)
							{
								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
					}
					else
					{
						if(a==2 && b==1)
						{
							c=a+2;
							d=b+1;
							if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
							{
								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
							c=a+1;
							d=b+2;
							if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
                            {
								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
							c=a-1;
							d=b+2;
							if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
							{
								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                            }
						}
						else
						{
							if(a==2 && b==2)
							{
								c=a+2;
								d=b+1;
								if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
								{
									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
								c=a+1;
								d=b+2;
								if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
								{
									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
								c=a-1;
								d=b+2;
								if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
								{
									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
								c=a+2;
								d=b-1;
								if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
								{
									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
							}
							else
							{
								if(a==1 && b==2)
								{
									c=a+2;
									d=b+1;
									if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
									{
										vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
									}
									c=a+1;
									d=b+2;
									if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
									{
										vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
									}
									c=a+2;
									d=b-1;
									if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
									{
										vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
									}
								}
								else
								{
																		 //4. kvadrant
									if(a==8 && b==8)
									{
										c=a-2;
										d=b-1;
										if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
										{
											vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
										}
										c=a-1;
										d=b-2;
										if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
										{
											vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                        }
									}
									else
									{
										if(a==7 && b==8)
										{
											c=a-2;
											d=b-1;
											if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
											{
												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a-1;
											d=b-2;
											if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
											{
												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a+1;
											d=b-2;
											if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
											{
												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
										}
										else
										{
											if(a==7 && b==7)
											{
												c=a-2;
												d=b+1;
												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
												{
													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a-2;
												d=b-1;
												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
												{
													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a-1;
												d=b-2;
												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
												{
													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a+1;
												d=b-2;
												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
                                                {
													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
											}
											else
											{
												if(a==8 && b==7)
												{
													c=a-2;
													d=b+1;
													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-2;
													d=b-1;
													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b-2;
													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
												}
												else
												{
																			//1.kvadrant
													if(a==1 && b==8)
													{
														c=a+2;
														d=b-1;
														if(pole[c][d]==1 ||	pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
														{
															vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
														}
														c=a+1;
														d=b-2;
														if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
														{
															vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
														}
													}
													else
													{
														if(a==1 && b==7)
														{
															c=a+2;
															d=b+1;
															if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
															{
																vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
															}
															c=a+2;
															d=b-1;
															if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
															{
																vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
															}
															c=a+1;
															d=b-2;
															if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
															{
																vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
															}
														}
														else
														{
															if(a==2 && b==8)
															{
																c=a+2;
																d=b-1;
																if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																{
																	vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																}
																c=a-1;
																d=b-2;
																if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																{
																	vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																}
																c=a+1;
																d=b-2;
																if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																{
																	vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                }
															}
															else
															{
																if(a==2 && b==7)
																{
																	c=a+2;
																	d=b+1;
																	if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																	{
																		vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																	}
																	c=a+2;
																	d=b-1;
																	if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																	{
																		vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																	}
																	c=a-1;
																	d=b-2;
																	if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																	{
																		vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																	}
																	c=a+1;
																	d=b-2;
																	if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																	{
																		vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                    }
																}
																else
																{
																								//3. kvadrant
																	if(a==8 && b==1)
																	{
																		c=a-2;
																		d=b+1;
																		if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																		{
																			vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																		}
																		c=a-1;
																		d=b+2;
																		if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																		{
																			vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																		}
																	}
																	else
																	{
																		if(a==8 && b==2)
																		{
																			c=a-2;
																			d=b+1;
																			if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																			{
																				vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																			}
																			c=a-1;
																			d=b+2;
																			if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																			{
																				vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																			}
																			c=a-2;
																			d=b-1;
																			if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																			{
																				vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																			}
																		}
																		else
																		{
																			if(a==7 && b==1)
																			{
																				c=a-2;
																				d=b+1;
																				if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																				{
																					vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																				}
																				c=a+1;
																				d=b+2;
																				if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																				{
																					vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																				}
																				c=a-1;
																				d=b+2;
																				if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																				{
																					vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																				}
																			}
																			else
																			{
																				if(a==7 && b==2)
																				{
																					c=a-2;
																					d=b+1;
																					if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																					{
																						vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																					}
																					c=a+1;
																					d=b+2;
																					if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																					{
																						vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																					}
																					c=a-1;
																					d=b+2;
																					if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																					{
																						vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																					}
																					c=a-2;
																					d=b-1;
																					if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																					{
																						vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                                    }
																				}
																				else
																				{
																					if(a==1)
																					{
																						c=a+2;
																						d=b+1;
																						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																						{
																							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																						}
																						c=a+1;
																						d=b+2;
																						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																						{
																							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																						}
																						c=a+2;
																						d=b-1;
																						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																						{
																							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																						}
																						c=a+1;
																						d=b-2;
																						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																						{
																							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																						}
																					}
																					else
																					{
																						if(a==2)
																						{
																							c=a+2;
																							d=b+1;
																							if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																							{
																								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																							}
																							c=a+1;
																							d=b+2;
																							if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																							{
																								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																							}
																							c=a-1;
																							d=b+2;
																							if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																							{
																								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																							}
																							c=a+2;
																							d=b-1;
																							if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																							{
																								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																							}
																							c=a-1;
																							d=b-2;
																							if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																							{
																								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																							}
																							c=a+1;
																							d=b-2;
																							if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																							{
																								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                                            }
																						}
																						else
																						{
																							if(a==7)
																							{
																								c=a-2;
																								d=b+1;
																								if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																								{
																									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																								c=a+1;
																								d=b+2;
																								if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																								{
																									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																								c=a-1;
																								d=b+2;
																								if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																								{
																									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																								c=a-2;
																								d=b-1;
																								if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																								{
																									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																								c=a-1;
																								d=b-2;
																								if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																								{
																									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																								c=a+1;
																								d=b-2;
																								if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																								{
																									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																							}
																							else
																							{
																								if(a==8)
																								{
																									c=a-2;
																									d=b+1;
																									if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																									{
																										vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																									}
																									c=a-1;
																									d=b+2;
																									if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																									{
																										vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																									}
																									c=a-2;
																									d=b-1;
																									if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																									{
																										vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																									}
																									c=a-1;
																									d=b-2;
																									if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																									{
																										vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																									}
																								}
																								else
																								{
																									if(b==1)
																									{
																										c=a+2;
																										d=b+1;
																										if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																										{
																											vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																										}
																										c=a-2;
																										d=b+1;
																										if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																										{
																											vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																										}
																										c=a+1;
																										d=b+2;
																										if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																										{
																											vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																										}
																										c=a-1;
																										d=b+2;
																										if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																										{
																											vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                                                        }
																									}
																									else
																									{
																										if(b==2)
																										{
																											c=a+2;
																											d=b+1;
																											if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																											{
																												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																											c=a-2;
																											d=b+1;
																											if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																											{
																												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																											c=a+1;
																											d=b+2;
																											if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																											{
																												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																											c=a-1;
																											d=b+2;
																											if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																											{
																												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																											c=a+2;
																											d=b-1;
																											if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																											{
																												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																											c=a-2;
																											d=b-1;
																											if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																											{
																												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																										}
																										else
																										{
																											if(b==7)
																											{
																												c=a+2;
																												d=b+1;
																												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																												{
																													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																												c=a-2;
																												d=b+1;
																												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																												{
																													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																												c=a+2;
																												d=b-1;
																												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																												{
																													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																												c=a-2;
																												d=b-1;
																												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																												{
																													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																												c=a-1;
																												d=b-2;
																												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																												{
																													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																												c=a+1;
																												d=b-2;
																												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																												{
																													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																											}
																											else
																											{
																												if(b==8)
																												{
																													c=a+2;
																													d=b-1;
																													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																													{
																														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																													}
																													c=a-2;
																													d=b-1;
																													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																													{
																														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																													}
																													c=a-1;
																													d=b-2;
																													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																													{
																														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																													}
																													c=a+1;
																													d=b-2;
																													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																													{
																														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                                                                    }
																												}
																												else
																												{
																													if(a>2 && a<7)
																													{
																														if(b>2 && b<7)
																														{
																															c=a+2;
																															d=b+1;
																															if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																															{
																																vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a-2;
																															d=b+1;
																															if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																															{
																																vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a+1;
																															d=b+2;
																															if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																															{
																																vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a-1;
																															d=b+2;
																															if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																															{
																																vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a+2;
																															d=b-1;
																															if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																															{
																																vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a-2;
																															d=b-1;
																															if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																															{
																																vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a-1;
																															d=b-2;
																															if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																															{
																																vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a+1;
																															d=b-2;
																															if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
																															{
																																vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																														}
																													}
																												}
																											}
                                                                                                        }
																									}
                                                                                                }
																							}
																						}
                                                                                    }
																				}
																			}
                                                                        }
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
				if(pole[a][b]==9)
				{
                	if(vnoreni==9)
					{
						tah=0;
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
				if(pole[a][b]==10)
				{
                	if(vnoreni==9)
					{
						tah=0;
					}
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
				if(pole[a][b]==11)
				{
                	if(vnoreni==9)
					{
						tah=0;
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
				if(pole[a][b]==12)
				{
                	if(vnoreni==9)
					{
						tah=0;
					}
					if(a==1 && b==1)
					{
						c=a+1;
						d=b+1;
						if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
						c=a+1;
						d=b;
						if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
						c=a;
						d=b+1;
						if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
						{
							vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					else
					{
						if(a==1 && b==8)
						{
							c=a+1;
							d=b;
							if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
							{
								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
							c=a+1;
							d=b-1;
							if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
							{
								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
							c=a;
							d=b-1;
							if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
							{
								vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
						}
						else
						{
							if(a==8 && b==1)
							{
								c=a;
								d=b+1;
								if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
								{
									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
								c=a-1;
								d=b+1;
								if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
								{
									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
								c=a-1;
								d=b;
								if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
								{
									vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
							}
							else
							{
								if(a==8 && b==8)
								{
									c=a;
									d=b-1;
									if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
									{
										vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
									}
									c=a-1;
									d=b;
									if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
									{
										vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
									}
									c=a-1;
									d=b-1;
									if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
									{
										vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                    } 
								}
								else
								{
									if(a==1)
									{
										c=a+1;
										d=b+1;
										if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
										{
											vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
										}
										c=a+1;
										d=b;
										if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
										{
											vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
										}
										c=a+1;
										d=b-1;
										if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
										{
											vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
										}
										c=a;
										d=b+1;
										if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
										{
											vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
										}
										c=a;
										d=b-1;
										if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
										{
											vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                        }
									}
									else
									{
										if(a==8)
										{
											c=a;
											d=b+1;
											if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
											{
												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a;
											d=b-1;
											if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
											{
												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a-1;
											d=b+1;
											if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
											{
												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a-1;
											d=b;
											if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
											{
												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a-1;
											d=b-1;
											if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
											{
												vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
										}
										else
										{
											if(b==1)
											{
												c=a+1;
												d=b+1;
												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
												{
													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a+1;
												d=b;
												if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
												{
													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a;
												d=b+1;
												if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
												{
													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a-1;
												d=b+1;
												if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
												{
													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a-1;
												d=b;
												if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
												{
													vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
											}
											else
											{
												if(b==8)
												{
													c=a+1;
													d=b;
													if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a+1;
													d=b-1;
													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a;
													d=b-1;
													if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b;
													if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b-1;
													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
												}
												else
												{
                                                	c=a+1;
													d=b+1;
													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a+1;
													d=b;
													if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a+1;
													d=b-1;
													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a;
													d=b+1;
													if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a;
													d=b-1;
													if(pole[a][d]==1 || pole[a][d]==2 || pole[a][d]==3 || pole[a][d]==4 || pole[a][d]==5 || pole[a][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b+1;
													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b;
													if(pole[c][b]==1 || pole[c][b]==2 || pole[c][b]==3 || pole[c][b]==4 || pole[c][b]==5 || pole[c][b]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b-1;
													if(pole[c][d]==1 || pole[c][d]==2 || pole[c][d]==3 || pole[c][d]==4 || pole[c][d]==5 || pole[c][d]>=13)
													{
														vnitrekaicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
			}
		}
	}
	if(vnoreni==9)                          //jedná se o náhodný tah?
	{                                       //nahodnì vyber figurku a tah, který mùže provést
		(figurka)--;
		do{
			a=rand()%(((figurka)+1));
			c=0;
			while(vyber[a][c].x!=1000)
			{
				c++;
				if(c==19)
				{
					break;
			  }
			}
			b=rand()%(c+1);
		}while(vyber[a][b].x==1000);
		*x=vyber[a][b].x;
		*y=vyber[a][b].y;
		*xkam=vyber[a][b].xx;
		*ykam=vyber[a][b].yy;
	}
	if(vnoreni==1)                  //hedná se o 1. tah?
	{
		if(*hodnotab==(-20))
		{
			aicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,9);    //udìlej náhodný tah
		}
	}
	if(vnoreni==0 || vnoreni==10)    //jedná se o protitah/1.nej tah (bez ohledu na dalsi tahy)
	{
		if(*hodnotab==0)
		{
			aicallinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,9); //udìlej náhodný tah
		}
	}
}
void vnitrekaicallinone(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int *hodnotac,int *figurka,int *hodnotas,int *tah,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9],souradnice vyber[16][20],int vnoreni)
{
	if(vnoreni==0)      //jedná se o funkci na nej tah(bez ohledu na další tahy)?
	{
		vnitrekzacatekaic(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),a,b,c,d,startstavb,pole);
	}
	if(vnoreni==1)       //jedná se o funkci na simulaci 1.tahu(následnì dalších tahù)?
	{
		vnitrekaic(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole);
	}
	if(vnoreni==2)       //jedná se o funkci na simulaci 2.tahu?
	{
		vnitrekaicc(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole);
	}
	if(vnoreni==3)      //jedná se o funkci na simulaci 3.tahu?
	{
		vnitrekaiccc(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole);
	}
	if(vnoreni==9)      //jedná se o funkci na náhodný tah?
	{
		vnitrekrtah(&(*figurka),&(*tah),a,b,c,d,pole,vyber);
	}
	if(vnoreni==10)    //jedná se o funkci na protitah?
	{
		vnitrekprotitahaib(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotab),a,b,c,d,startstavb,pole);
	}
}

void aiballinone(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int *hodnotab,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9],int vnoreni)
{
	int aa;
	int bb;
	int cc;
	int dd;
	int help,helpp;
	int z;
	int pomocna;
	int tah,figurka;
	souradnice vyber[16][20];

	if(vnoreni==0)
	{
		startstavc=0;
		*hodnotac=0;
		stavc(&startstavc,pole);
	}
	if(vnoreni==1)
	{
		startstavb=0;
		startstavc=0;
		*hodnotab=0;
		*hodnotac=0;
		*hodnotas=0;
		pomocna=0;
		stavb(&startstavb,pole);
		stavc(&startstavc,pole);
		//zacatekaib(&a,&b,&c,&d,&hodnotac,pole);
		aiballinone(&a,&b,&c,&d,&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,0);
		help=pole[c][d];
		pole[c][d]=pole[a][b];
		pole[a][b]=13;
		if(23==obranasachuc(pole))
		{
			//protitahaib(&aa,&bb,&cc,&dd,&hodnotab,pole);
			aicallinone(&aa,&bb,&cc,&dd,&(*hodnotab),&(*hodnotac),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,10);
			helpp=pole[cc][dd];
			pole[cc][dd]=pole[aa][bb];
			pole[aa][bb]=13;
			pomocna=1;
		}
		*hodnotac=(-20);
		//aibb(startstavc,pole,&hodnotac,startstavb);
		aiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,2);
		if(pomocna==1)
		{
			pole[aa][bb]=pole[cc][dd];
			pole[cc][dd]=helpp;
		}
		pole[a][b]=pole[c][d];
		pole[c][d]=help;

		*hodnotas=*hodnotac;
		*x=a;
		*y=b;
		*xkam=(c);
		*ykam=(d);
		z=0;
	}
	if(vnoreni==9)
	{
		figurka=0;
		tah=0;
	}
	if(vnoreni==10)
	{
		startstavc=0;
		*hodnotac=0;
		stavc(&startstavc,pole);
	}


	for(b=1;b!=9;b++)
	{
		for(a=1;a!=9;a++)
		{
			z=0;
			if(pole[a][b]>=1 && pole[a][b]<=6)
			{
				if(pole[a][b]==1)
				{
					if(vnoreni==9)
					{
						tah=0;
					}
					c=a+1;
					d=b+1;
					if(pole[c][d]>=7 && pole[c][d]<=11)
					{
					  if(a!=8)
					  {
						vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
					  }
					}


						c=a-1;
						d=b+1;
						if(pole[c][d]>=7 && pole[c][d]<=11)
						{
						  if(a!=1)
						  {
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						  }
						}

					c=a;
					d=b+1;
					if(pole[a][d]>=13)
					{
						vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						if(b==2)
						{
                        	c=a;
							d=b+2;
							if(pole[a][d]>=13)
							{
								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
				if(pole[a][b]==2)
				{
					if(vnoreni==9)
					{
						tah=0;
					}													 //2. kvadrant
					if(a==1 && b==1)
					{
						c=a+2;
						d=b+1;
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
						c=a+1;
						d=b+2;
							if(pole[c][d]==7  || pole[c][d]==8 || pole[c][d]==9  || pole[c][d]==10  || pole[c][d]==11 || pole[c][d]>=13)
							{
								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
					}
					else
					{
						if(a==2 && b==1)
						{
							c=a+2;
							d=b+1;
							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
							{
								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
							c=a+1;
							d=b+2;
							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
                            {
								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
							c=a-1;
							d=b+2;
							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
							{
								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                            }
						}
						else
						{
							if(a==2 && b==2)
							{
								c=a+2;
								d=b+1;
								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
								{
									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
								c=a+1;
								d=b+2;
								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
								{
									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
								c=a-1;
								d=b+2;
								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
								{
									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
								c=a+2;
								d=b-1;
								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
								{
									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
							}
							else
							{
								if(a==1 && b==2)
								{
									c=a+2;
									d=b+1;
									if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
									{
										vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
									}
									c=a+1;
									d=b+2;
									if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
									{
										vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
									}
									c=a+2;
									d=b-1;
									if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
									{
										vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
									}
								}
								else
								{
																		 //4. kvadrant
									if(a==8 && b==8)
									{
										c=a-2;
										d=b-1;
										if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
										{
											vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
										}
										c=a-1;
										d=b-2;
										if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
										{
											vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                        }
									}
									else
									{
										if(a==7 && b==8)
										{
											c=a-2;
											d=b-1;
											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
											{
												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a-1;
											d=b-2;
											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
											{
												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a+1;
											d=b-2;
											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
											{
												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
										}
										else
										{
											if(a==7 && b==7)
											{
												c=a-2;
												d=b+1;
												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
												{
													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a-2;
												d=b-1;
												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
												{
													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a-1;
												d=b-2;
												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
												{
													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a+1;
												d=b-2;
												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
                                                {
													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
											}
											else
											{
												if(a==8 && b==7)
												{
													c=a-2;
													d=b+1;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-2;
													d=b-1;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b-2;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
												}
												else
												{
																			//1.kvadrant
													if(a==1 && b==8)
													{
														c=a+2;
														d=b-1;
														if(pole[c][d]==7 ||	pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
														{
															vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
														}
														c=a+1;
														d=b-2;
														if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
														{
															vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
														}
													}
													else
													{
														if(a==1 && b==7)
														{
															c=a+2;
															d=b+1;
															if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
															{
																vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
															}
															c=a+2;
															d=b-1;
															if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
															{
																vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
															}
															c=a+1;
															d=b-2;
															if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
															{
																vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
															}
														}
														else
														{
															if(a==2 && b==8)
															{
																c=a+2;
																d=b-1;
																if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																{
																	vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																}
																c=a-1;
																d=b-2;
																if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																{
																	vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																}
																c=a+1;
																d=b-2;
																if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																{
																	vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                }
															}
															else
															{
																if(a==2 && b==7)
																{
																	c=a+2;
																	d=b+1;
																	if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																	{
																		vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																	}
																	c=a+2;
																	d=b-1;
																	if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																	{
																		vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																	}
																	c=a-1;
																	d=b-2;
																	if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																	{
																		vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																	}
																	c=a+1;
																	d=b-2;
																	if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																	{
																		vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                    }
																}
																else
																{
																								//3. kvadrant
																	if(a==8 && b==1)
																	{
																		c=a-2;
																		d=b+1;
																		if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																		{
																			vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																		}
																		c=a-1;
																		d=b+2;
																		if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																		{
																			vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																		}
																	}
																	else
																	{
																		if(a==8 && b==2)
																		{
																			c=a-2;
																			d=b+1;
																			if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																			{
																				vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																			}
																			c=a-1;
																			d=b+2;
																			if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																			{
																				vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																			}
																			c=a-2;
																			d=b-1;
																			if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																			{
																				vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																			}
																		}
																		else
																		{
																			if(a==7 && b==1)
																			{
																				c=a-2;
																				d=b+1;
																				if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																				{
																					vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																				}
																				c=a+1;
																				d=b+2;
																				if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																				{
																					vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																				}
																				c=a-1;
																				d=b+2;
																				if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																				{
																					vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																				}
																			}
																			else
																			{
																				if(a==7 && b==2)
																				{
																					c=a-2;
																					d=b+1;
																					if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																					{
																						vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																					}
																					c=a+1;
																					d=b+2;
																					if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																					{
																						vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																					}
																					c=a-1;
																					d=b+2;
																					if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																					{
																						vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																					}
																					c=a-2;
																					d=b-1;
																					if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																					{
																						vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                                    }
																				}
																				else
																				{
																					if(a==1)
																					{
																						c=a+2;
																						d=b+1;
																						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																						{
																							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																						}
																						c=a+1;
																						d=b+2;
																						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																						{
																							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																						}
																						c=a+2;
																						d=b-1;
																						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																						{
																							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																						}
																						c=a+1;
																						d=b-2;
																						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																						{
																							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																						}
																					}
																					else
																					{
																						if(a==2)
																						{
																							c=a+2;
																							d=b+1;
																							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																							{
																								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																							}
																							c=a+1;
																							d=b+2;
																							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																							{
																								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																							}
																							c=a-1;
																							d=b+2;
																							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																							{
																								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																							}
																							c=a+2;
																							d=b-1;
																							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																							{
																								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																							}
																							c=a-1;
																							d=b-2;
																							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																							{
																								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																							}
																							c=a+1;
																							d=b-2;
																							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																							{
																								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                                            }
																						}
																						else
																						{
																							if(a==7)
																							{
																								c=a-2;
																								d=b+1;
																								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																								{
																									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																								c=a+1;
																								d=b+2;
																								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																								{
																									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																								c=a-1;
																								d=b+2;
																								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																								{
																									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																								c=a-2;
																								d=b-1;
																								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																								{
																									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																								c=a-1;
																								d=b-2;
																								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																								{
																									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																								c=a+1;
																								d=b-2;
																								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																								{
																									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																								}
																							}
																							else
																							{
																								if(a==8)
																								{
																									c=a-2;
																									d=b+1;
																									if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																									{
																										vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																									}
																									c=a-1;
																									d=b+2;
																									if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																									{
																										vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																									}
																									c=a-2;
																									d=b-1;
																									if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																									{
																										vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																									}
																									c=a-1;
																									d=b-2;
																									if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																									{
																										vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																									}
																								}
																								else
																								{
																									if(b==1)
																									{
																										c=a+2;
																										d=b+1;
																										if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																										{
																											vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																										}
																										c=a-2;
																										d=b+1;
																										if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																										{
																											vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																										}
																										c=a+1;
																										d=b+2;
																										if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																										{
																											vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																										}
																										c=a-1;
																										d=b+2;
																										if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																										{
																											vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                                                        }
																									}
																									else
																									{
																										if(b==2)
																										{
																											c=a+2;
																											d=b+1;
																											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																											{
																												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																											c=a-2;
																											d=b+1;
																											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																											{
																												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																											c=a+1;
																											d=b+2;
																											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																											{
																												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																											c=a-1;
																											d=b+2;
																											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																											{
																												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																											c=a+2;
																											d=b-1;
																											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																											{
																												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																											c=a-2;
																											d=b-1;
																											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																											{
																												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																											}
																										}
																										else
																										{
																											if(b==7)
																											{
																												c=a+2;
																												d=b+1;
																												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																												{
																													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																												c=a-2;
																												d=b+1;
																												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																												{
																													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																												c=a+2;
																												d=b-1;
																												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																												{
																													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																												c=a-2;
																												d=b-1;
																												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																												{
																													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																												c=a-1;
																												d=b-2;
																												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																												{
																													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																												c=a+1;
																												d=b-2;
																												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																												{
																													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																												}
																											}
																											else
																											{
																												if(b==8)
																												{
																													c=a+2;
																													d=b-1;
																													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																													{
																														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																													}
																													c=a-2;
																													d=b-1;
																													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																													{
																														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																													}
																													c=a-1;
																													d=b-2;
																													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																													{
																														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																													}
																													c=a+1;
																													d=b-2;
																													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																													{
																														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                                                                                                    }
																												}
																												else
																												{
																													if(a>2 && a<7)
																													{
																														if(b>2 && b<7)
																														{
																															c=a+2;
																															d=b+1;
																															if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																															{
																																vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a-2;
																															d=b+1;
																															if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																															{
																																vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a+1;
																															d=b+2;
																															if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																															{
																																vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a-1;
																															d=b+2;
																															if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																															{
																																vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a+2;
																															d=b-1;
																															if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																															{
																																vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a-2;
																															d=b-1;
																															if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																															{
																																vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a-1;
																															d=b-2;
																															if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																															{
																																vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																															c=a+1;
																															d=b-2;
																															if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
																															{
																																vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
																															}
																														}
																													}
																												}
																											}
                                                                                                        }
																									}
                                                                                                }
																							}
																						}
                                                                                    }
																				}
																			}
                                                                        }
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
				if(pole[a][b]==3)
				{
                	if(vnoreni==9)
					{
						tah=0;
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
				if(pole[a][b]==4)
				{
                	if(vnoreni==9)
					{
						tah=0;
					}
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
				if(pole[a][b]==5)
				{
                	if(vnoreni==9)
					{
						tah=0;
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=8 && z!=1)
					{
						c++;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=8 && z!=1)
					{
						c--;
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && d!=1 && z!=1)
					{
						c++;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && d!=1 && z!=1)
					{
						c--;
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=8 && z!=1)
					{
						d++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(d!=1 && z!=1)
					{
						d--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=8 && z!=1)
					{
						c++;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					z=0;
					c=a;
					d=b;
					while(c!=1 && z!=1)
					{
						c--;
						if(pole[c][d]>=1 && pole[c][d]<=12)
						{
							z=1;
						}
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
				if(pole[a][b]==6)
				{
                	if(vnoreni==9)
					{
						tah=0;
					}
					if(a==1 && b==1)
					{
						c=a+1;
						d=b+1;
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
						c=a+1;
						d=b;
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
						c=a;
						d=b+1;
						if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
						{
							vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
						}
					}
					else
					{
						if(a==1 && b==8)
						{
							c=a+1;
							d=b;
							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
							{
								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
							c=a+1;
							d=b-1;
							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
							{
								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
							c=a;
							d=b-1;
							if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
							{
								vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
							}
						}
						else
						{
							if(a==8 && b==1)
							{
								c=a;
								d=b+1;
								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
								{
									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
								c=a-1;
								d=b+1;
								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
								{
									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
								c=a-1;
								d=b;
								if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
								{
									vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
								}
							}
							else
							{
								if(a==8 && b==8)
								{
									c=a;
									d=b-1;
									if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
									{
										vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
									}
									c=a-1;
									d=b;
									if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
									{
										vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
									}
									c=a-1;
									d=b-1;
									if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
									{
										vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                    } 
								}
								else
								{
									if(a==1)
									{
										c=a+1;
										d=b+1;
										if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
										{
											vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
										}
										c=a+1;
										d=b;
										if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
										{
											vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
										}
										c=a+1;
										d=b-1;
										if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
										{
											vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
										}
										c=a;
										d=b+1;
										if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
										{
											vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
										}
										c=a;
										d=b-1;
										if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
										{
											vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
                                        }
									}
									else
									{
										if(a==8)
										{
											c=a;
											d=b+1;
											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
											{
												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a;
											d=b-1;
											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
											{
												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a-1;
											d=b+1;
											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
											{
												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a-1;
											d=b;
											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
											{
												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
											c=a-1;
											d=b-1;
											if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
											{
												vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
											}
										}
										else
										{
											if(b==1)
											{
												c=a+1;
												d=b+1;
												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
												{
													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a+1;
												d=b;
												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
												{
													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a;
												d=b+1;
												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
												{
													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a-1;
												d=b+1;
												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
												{
													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
												c=a-1;
												d=b;
												if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
												{
													vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
												}
											}
											else
											{
												if(b==8)
												{
													c=a+1;
													d=b;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a+1;
													d=b-1;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a;
													d=b-1;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b-1;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
												}
												else
												{
                                                	c=a+1;
													d=b+1;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a+1;
													d=b;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a+1;
													d=b-1;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a;
													d=b+1;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a;
													d=b-1;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[a][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b+1;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][b]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
													c=a-1;
													d=b-1;
													if(pole[c][d]==7 || pole[c][d]==8 || pole[c][d]==9 || pole[c][d]==10 || pole[c][d]==11 || pole[c][d]>=13)
													{
														vnitrekaiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(figurka),&(*hodnotas),&(tah),a,b,c,d,startstavb,startstavc,pole,vyber,vnoreni);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if(vnoreni==9)
					{
						if(tah==0)
						{
							vyber[figurka][tah].x=1000;
						}
						(figurka)++;
					}
				}
			}
		}
	}
	if(vnoreni==9)
	{
		(figurka)--;
		do{
			a=rand()%(((figurka)+1));
			c=0;
			while(vyber[a][c].x!=1000)
			{
				c++;
				if(c==19)
				{
					break;
			  }
			}
			b=rand()%(c+1);
		}while(vyber[a][b].x==1000);
		*x=vyber[a][b].x;
		*y=vyber[a][b].y;
		*xkam=vyber[a][b].xx;
		*ykam=vyber[a][b].yy;
	}
	if(vnoreni==1)
	{
		if(*hodnotac==(-20))
		{
			aiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,9);      //rtahb(&(*x),&(*y),&(*xkam),&(*ykam),pole);
		}
	}


	if(vnoreni==0 || vnoreni==10)
	{
		if(*hodnotac==0)
		{
			aiballinone(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole,9);      //rtahb(&(*x),&(*y),&(*xkam),&(*ykam),pole);
		}
	}
}
void vnitrekaiballinone(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int *hodnotab,int *figurka,int *hodnotas,int *tah,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9],souradnice vyber[16][20],int vnoreni)
{
	if(vnoreni==0)      //jedná se o funkci na nej tah(bez ohledu na další tahy)?
	{
		vnitrekzacatekaib(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),a,b,c,d,startstavc,pole);
	}
	if(vnoreni==1)      //jedná se o funkci na simulaci 1.tahu(následnì dalších tahù)?
	{
		vnitrekaib(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole);
	}
	if(vnoreni==2)      //jedná se o funkci na simulaci 2.tahu?
	{
		vnitrekaibb(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole);
	}
	if(vnoreni==3)       //jedná se o funkci na simulaci 3.tahu?
	{
		vnitrekaibbb(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),&(*hodnotab),&(*hodnotas),a,b,c,d,startstavb,startstavc,pole);
	}
	if(vnoreni==9)        //jedná se o funkci na náhodný tah?
	{
		vnitrekrtahb(&(*figurka),&(*tah),a,b,c,d,pole,vyber);
	}
	if(vnoreni==10)        //jedná se o funkci na protitah?
	{
		vnitrekprotitahaic(&(*x),&(*y),&(*xkam),&(*ykam),&(*hodnotac),a,b,c,d,startstavc,pole);
	}
}

